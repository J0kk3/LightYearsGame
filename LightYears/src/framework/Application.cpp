#include <iostream>
#include "framework/Application.h"

namespace ly
{
    ly::Application::Application()
        : _window{sf::VideoMode(1024, 1440), "Light Years"},
          _targetFrameRate{60.0f},
          _tickClock{}
    {
    }

    // Main application loop
    void Application::Run()
    {
        //Restart the clock at the beginning of the run
        _tickClock.restart();
        //Accumulator for time since last update
        float accumulatedTime = 0.0f;
        float targetDeltaTime = 1.0f / _targetFrameRate;

        while (_window.isOpen())
        {
            sf::Event windowEvent;
            while (_window.pollEvent(windowEvent))
            {
                // Check for the window close event
                if (windowEvent.type == sf::Event::EventType::Closed)
                {
                    _window.close();
                    Tick(targetDeltaTime);
                    Render();
                }
            }

            //Accumulate elapsed time since last frame
            accumulatedTime += _tickClock.restart().asSeconds();
            //Ensure updates occur at fixed intervals
            while (accumulatedTime > targetDeltaTime)
            {
                accumulatedTime -= targetDeltaTime;
            }
        }
    }

    //Tick: Updates the game logic based on the time elapsed since last update
    void Application::Tick(float deltaTime)
    {
        std::cout << "Ticking at framerate: " << 1.0f / deltaTime << std::endl;
    }

    //Render: Handles all drawing operations
    void Application::Render()
    {
    }
}