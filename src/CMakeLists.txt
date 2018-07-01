set(engine_base_src GameContainer.h GameContainer.cpp Window.cpp Window.h Types.h States/StateManager.cpp States/StateManager.h Graphics/Graphics.cpp Graphics/Graphics.h Graphics/Vulkan/ValidationLayers.cpp Graphics/Vulkan/ValidationLayers.h Graphics/Vulkan/VulkanUtil.cpp Graphics/Vulkan/VulkanUtil.h)

add_library(shv3dengine ${engine_base_src})

add_executable(shv3dengine_exec main.cpp)

INCLUDE_DIRECTORIES(${OPENGL_INCLUDE_DIR} ${GLM_INCLUDE_DIRS} ${Boost_INCLUDE_DIR} ${OPENAL_INCLUDE_DIR} ${GLFW_INCLUDE_DIR} ${Vulkan_INCLUDE_DIRS})
TARGET_LINK_LIBRARIES(shv3dengine_exec shv3dengine spdlog::spdlog ${CMAKE_THREAD_LIBS_INIT} ${GLM_LIBRARIES} ${Boost_LIBRARIES} ${OPENAL_LIBRARY} ${GLFW_LIBRARIES} ${Vulkan_LIBRARIES})