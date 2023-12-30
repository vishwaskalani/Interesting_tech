#include <SFML/Graphics.hpp>
#include <iostream>

int main(int argc, char const *argv[])
{
    sf::RenderWindow window(sf::VideoMode(400,400), "Hello From SFML");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Magenta);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if(event.type == sf::Event::Closed){
				std::cout<<"Closing the window"<<std::endl;
                window.close();
            }
			if(event.type == sf::Event::MouseButtonPressed){
				std::cout<<"Mouse button pressed"<<std::endl;
			}
        }
        window.clear();
        window.draw(shape);
        window.display();
        
    }

    return 0;
}	