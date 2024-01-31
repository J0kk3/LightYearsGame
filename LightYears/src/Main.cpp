#include <iostream>
#include <memory>
#include <SFML/Graphics.hpp>
#include "framework/Application.h"

int main()
{
    //Create a unique_ptr to an Application instance, ensuring memory management and avoiding leaks
    std::unique_ptr<ly::Application> app = std::make_unique<ly::Application>();
    //Start the application's main loop
    app->Run();
}