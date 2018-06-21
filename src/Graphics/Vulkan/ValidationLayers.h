//
// Created by thekatze on 21/06/18.
//

#ifndef SHV3DENGINE_VALIDATIONLAYERS_H
#define SHV3DENGINE_VALIDATIONLAYERS_H

#include <vector>
//TODO: This can surely be optimized, i just followed the tutorial (vulkan-tutorial.com)

class ValidationLayers {
public:
#ifndef NDEBUG
    static const bool enableValidationLayers = true;
#else
    static const bool enableValidationLayers = false;
#endif

    static const std::vector<const char*> enabledValidationLayers;

    static bool supported();
};


#endif //SHV3DENGINE_VALIDATIONLAYERS_H
