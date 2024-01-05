#include "app.hpp"

#include <iostream>

namespace ss
{
    void Applcation::run()
    {
        while (!ssWindow.shouldClose())
        {
            glfwPollEvents();
        }        
    }
}