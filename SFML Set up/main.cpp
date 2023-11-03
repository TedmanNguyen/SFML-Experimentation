#include <SFML/Graphics.hpp>
#include <iostream>

using namespace std;

int main()
{
    
    
    sf::RenderWindow window(sf::VideoMode(512, 512), "SFML tutorial",
        sf::Style::Close | sf::Style::Resize);

    while (window.isOpen())
    {
        sf::Event eventOne;
        while (window.pollEvent(eventOne))
        {
            switch (eventOne.type)
            {
            case sf::Event::Closed:
                window.close();
                break;
            case sf::Event::Resized:
                cout << "New Window width: " << eventOne.size.width << " "
                    << "New window height: " << eventOne.size.height << endl;
                break;
            }

            if (eventOne.type == eventOne.Closed)
            {
                window.close();
            }
        }
    }

    return 0;
}