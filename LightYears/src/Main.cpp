#include <iostream>
#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow renderWindow{sf::VideoMode(100,100),"MyWindow"};
    std::cout << "Hello User" << std::endl;
}