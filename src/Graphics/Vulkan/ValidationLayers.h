//
// Created by thekatze on 21/06/18.
//

#ifndef SHV3DENGINE_VALIDATIONLAYERS_H
#define SHV3DENGINE_VALIDATIONLAYERS_H

#include <vector>
#include <vulkan/vulkan.h>
//TODO: This can surely be optimized, i just followed the tutorial (vulkan-tutorial.com)

class ValidationLayers {
public:
#ifndef NDEBUG
    static const bool enableValidationLayers = true;
#else
    static const bool enableValidationLayers = false;
#endif

    static VkDebugReportCallbackEXT callback;

    static VKAPI_ATTR VkBool32 VKAPI_CALL debugCallback(
            VkDebugReportFlagsEXT flags,
            VkDebugReportObjectTypeEXT objType,
            uint64_t obj,
            size_t location,
            int32_t code,
            const char* layerPrefix,
            const char* msg,
            void* userData) {

        std::cerr << "Validation Layer: " << msg << std::endl;

        return VK_FALSE;
    }

    static const std::vector<const char*> enabledValidationLayers;
    static VkResult createDebugReportCallbackEXT(VkInstance instance, const VkDebugReportCallbackCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDebugReportCallbackEXT* pCallback);
    static void destroyDebugReportCallbackEXT(VkInstance instance, VkDebugReportCallbackEXT callback, const VkAllocationCallbacks* pAllocator);
    static bool supported();
};


#endif //SHV3DENGINE_VALIDATIONLAYERS_H
