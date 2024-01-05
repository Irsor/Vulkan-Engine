#pragma once

#include "ss_window.hpp"

namespace ss
{
    class Applcation
    {
        public: 
            // TODO constexpr
            static constexpr int WIDTH = 1920;
            static constexpr int HEIGHT = 1080;

            void run();

        private: 
            // TODO {}
            SsWindow ssWindow{WIDTH, HEIGHT, "Engine"};
    };
} 
