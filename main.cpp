#include <SFML/Graphics.hpp>

/*
int main()
{
    sf::RenderWindow window(sf::VideoMode({200, 200}), "SFML works!");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }
}
*/



using namespace sf;

int main()
{
    RenderWindow window(VideoMode({1440, 900}), "Timber!");

    Texture textureBackgound;
    textureBackgound.loadFromFile("graphics/background.png");

    Sprite spriteBackground;
    spriteBackground.setTexture(textureBackgound);
    spriteBackground.setPosition(0, 0);


    while (window.isOpen())
    {
        
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
        }
        
        window.clear();
        window.draw(spriteBackground);
        window.display();
    }
    

    return 0;    
}

