//
// Created by thekatze on 19/06/18.
//

#ifndef SHV3DENGINE_GRAPHICS_H
#define SHV3DENGINE_GRAPHICS_H


#include <vulkan/vulkan.h>

class Graphics {
    VkInstance instance;
    VkPhysicalDevice physicalDevice;

public:
    Graphics();
    ~Graphics();

};


#endif //SHV3DENGINE_GRAPHICS_H
