//
// Created by thekatze on 19/06/18.
//

#include <GLFW/glfw3.h>
#include <cstdlib>
#include <vector>
#include <iostream>
#include <cstring>
#include "Graphics.h"
#include "Vulkan/ValidationLayers.h"

Graphics::Graphics() {
    //Check for Validation Layer support
    if (ValidationLayers::enableValidationLayers && !ValidationLayers::supported()) {
        //ValidationLayers requested, but not supported
        exit(3);
    }

    VkApplicationInfo applicationInfo = {};
    applicationInfo.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
    applicationInfo.pApplicationName = "Vulkan Engine";
    applicationInfo.applicationVersion = VK_MAKE_VERSION(0, 1, 0);
    applicationInfo.pEngineName = "shv3dengine";
    applicationInfo.engineVersion = VK_MAKE_VERSION(0, 1, 0);
    applicationInfo.apiVersion = VK_API_VERSION_1_0;

    //Get Vulkan extensions
    uint32_t glfwExtensionCount = 0;
    const char** glfwExtensions;

    glfwExtensions = glfwGetRequiredInstanceExtensions(&glfwExtensionCount);

    std::vector<const char*> requiredExtensions(glfwExtensions, glfwExtensions + glfwExtensionCount);

    if (ValidationLayers::enableValidationLayers) {
        requiredExtensions.push_back(VK_EXT_DEBUG_REPORT_EXTENSION_NAME);
    }

    //Define Instance
    VkInstanceCreateInfo createInfo = {};
    createInfo.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
    createInfo.pApplicationInfo = &applicationInfo;
    createInfo.enabledExtensionCount = static_cast<uint32_t>(requiredExtensions.size());
    createInfo.ppEnabledExtensionNames = requiredExtensions.data();

    if (ValidationLayers::enableValidationLayers) {
        createInfo.enabledLayerCount = static_cast<uint32_t>(ValidationLayers::enabledValidationLayers.size());
        createInfo.ppEnabledLayerNames = ValidationLayers::enabledValidationLayers.data();
    } else {
        createInfo.enabledLayerCount = 0;
    }



    if (vkCreateInstance(&createInfo, nullptr, &instance) != VK_SUCCESS) {
        //Error, Vulkan could not be initialized

        exit(2);
    }

    //Check for extension support
    uint32_t extensionCount = 0;
    vkEnumerateInstanceExtensionProperties(nullptr, &extensionCount, nullptr);

    std::vector<VkExtensionProperties> extensions(extensionCount);

    vkEnumerateInstanceExtensionProperties(nullptr, &extensionCount, extensions.data());

    //Log available extensions
    std::cout << "Available Extensions:" << std::endl;
    for (const auto& extension : extensions) {
        std::cout << extension.extensionName << " " << extension.specVersion << std::endl;
    }

    //TODO: Check if glfwRequiredExtensions are available
    std::cout << std::endl << "Required Extensions:" << std::endl;
    for (const auto& extension: requiredExtensions) {
        std::cout << extension;
        for (const auto& availableExtension : extensions) {
            if (strcmp(extension, availableExtension.extensionName) == 0) {
                std::cout << " - Available";
                break;
            }
        }
        std::cout << std::endl;
    }
}

Graphics::~Graphics() {
    vkDestroyInstance(this->instance, nullptr);
}