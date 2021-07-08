#include <SFML/Audio.hpp>
#include <cmath>
#include <SFML/Graphics.hpp>
#include <sstream>  
#include <string>
#include <iostream>

using namespace std;
 

int xCoor(float n,float m,float f,float t){
    return ((1-(n/m)*cos(n*t))+(f*(n/m)*sin((m-n)*t)));
}

int yCoor(float n,float m,float f,float t){
    return ((1-(n/m)*sin(n*t))+(f*(n/m)*cos((m-n)*t)));
}
int main()
{	 
	sf::RenderWindow window(sf::VideoMode(800, 600), "SFML window");
    float n=2;
    float m=1;
    float t=0;
    float f=0.5;
    float x;
    float y;
    while (window.isOpen())
    {
        x=xCoor(n,m,f,t)+200;
        y=yCoor(n,m,f,t)+130;
        cout <<"\n"<< x,y;
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
    
	sf::Vertex point(sf::Vector2f(x*2, y*2), sf::Color::Red);

	window.draw(&point, 1, sf::Points);
        window.display();
    t+=0.1;
    m+=0.1;
    n+=0.1;
    f+=0.1;
     
    }
    return EXIT_SUCCESS;
}
