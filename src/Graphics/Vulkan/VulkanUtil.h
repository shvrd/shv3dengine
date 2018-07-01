//
// Created by thekatze on 27/06/18.
//

#ifndef SHV3DENGINE_VULKANUTIL_H
#define SHV3DENGINE_VULKANUTIL_H


#include <vulkan/vulkan.h>

class VulkanUtil {
public:
    static bool isDeviceSuitable(VkPhysicalDevice device);
};


#endif //SHV3DENGINE_VULKANUTIL_H
