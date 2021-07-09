#include <SFML/Audio.hpp>
#include <cmath>
#include <SFML/Graphics.hpp>
#include <sstream>  
#include <string>
#include <iostream>

using namespace std;
 
int main()
{	 
    float pi=360;
    float k;
    float n=1;
    float d=1;
    cout << k;
    float theta= 0;
	sf::RenderWindow window(sf::VideoMode(800, 600), "SFML window");
    while (window.isOpen())
    {
        float r= 200 * cos(k*theta);
        float x= r*cos(theta)+200;
        float y= r*sin(theta)+200;
        //events
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
    
	sf::Vertex point(sf::Vector2f(x, y), sf::Color::White);
 
	window.draw(&point, 1, sf::Points);
        window.display();
        theta+=0.1;
        cout <<"\n"<<theta;
  
     
    }
    return EXIT_SUCCESS;
}
