#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#include <string>

namespace ss
{
    class SsWindow
    {
    public:
        SsWindow(int w, int h, std::string name);
        ~SsWindow();

        bool shouldClose();
        
    private:
        void initWindow();

        const int width;
        const int height;
        const std::string windowName;
        GLFWwindow* window;
    };    
} 
