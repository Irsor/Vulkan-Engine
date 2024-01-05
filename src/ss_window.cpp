#include "ss_window.hpp"

namespace ss
{
    SsWindow::SsWindow(int w, int h, std::string name) : width(w), height(h), windowName(name)
    {
        initWindow();
    }

    SsWindow::~SsWindow()
    {
        glfwDestroyWindow(window);
        glfwTerminate();
    }

    bool SsWindow::shouldClose()
    {
        return glfwWindowShouldClose(window);
    }

    void SsWindow::initWindow()
    {
        glfwInit();
        glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
        glfwWindowHint(GLFW_RESIZABLE, GLFW_TRUE);

        window = glfwCreateWindow(width, height, windowName.c_str(), nullptr, nullptr);
    }
}