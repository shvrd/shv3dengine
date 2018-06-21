//
// Created by thekatze on 21/06/18.
//

#include <stdint-gcc.h>
#include <vulkan/vulkan.h>
#include <iostream>
#include <cstring>
#include "ValidationLayers.h"

const std::vector<const char*> ValidationLayers::enabledValidationLayers = {
        "VK_LAYER_LUNARG_standard_validation"
};

bool ValidationLayers::supported() {
    uint32_t  layerCount;
    vkEnumerateInstanceLayerProperties(&layerCount, nullptr);
    std::vector<VkLayerProperties> availableLayers(layerCount);

    vkEnumerateInstanceLayerProperties(&layerCount, availableLayers.data());

    for (const char* layerName : enabledValidationLayers) {
        //Checking support for "LAYERNAME" Validation Layer
        bool layerFound = false;

        for (const auto& layerProperties : availableLayers) {
            if (strcmp(layerName, layerProperties.layerName) == 0) {
                //Layer found
                layerFound = true;
                break;
            }
        }

        if (!layerFound) {
            return false;
        }
    }
    return true;
}
