#include <SFML/Graphics.hpp>
#include <iostream>
#include <render.hpp>

int main()
{
    //Window setup
    sf::RenderWindow window(sf::VideoMode(640, 480), "Platformer Tests");
    sf::Event event;

    //Game loop
    while (window.isOpen())
    {
        //Event polling
        while (window.pollEvent(event))
        {
            switch (event.type)
            {
                // window closed
                case sf::Event::Closed:
                    window.close();
                    break;

                case sf::Event::Resized:
                    window.setSize(sf::Vector2u(window.getSize().x, window.getSize().x*15/16));
                    break;
                

                default:
                    break;
            }
        }

        //Update game states

        //Render
        window.clear();
        window.display();
    }
    return 0;
}

