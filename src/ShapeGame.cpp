#include <SFML/Graphics.hpp>

int main()
{
    auto window = sf::RenderWindow({1920u, 1080u}, "Shape Game");
    window.setFramerateLimit(60);

    while (window.isOpen())
    {
        for (auto event = sf::Event(); window.pollEvent(event);)
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }

        window.clear();
        window.display();
    }
}
