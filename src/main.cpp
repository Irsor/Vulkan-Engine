#include <glm/matrix.hpp>
#include <glm/vec4.hpp>
#include <GLFW/glfw3.h>
#include <vulkan/vulkan.hpp>

#include <iostream>

int main()
{
    glfwInit();
    std::cout << "Hello, World!" << std::endl;

    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    GLFWwindow* window = glfwCreateWindow(800, 600, "Vulkan Window", nullptr, nullptr);

    uint32_t extensionCount = 0;
    vkEnumerateInstanceExtensionProperties(nullptr, &extensionCount, nullptr);

    std::cout << extensionCount << " extensions supported" << std::endl;

    glm::mat4 matrix;
    glm::vec4 vector;
    auto test = matrix * vector;

    while (!glfwWindowShouldClose(window))
    {
        glfwPollEvents();
    }

    glfwDestroyWindow(window);
    glfwTerminate();
    
    return 0;
}