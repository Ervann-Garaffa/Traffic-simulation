#include "Includes.hpp"
#include "Car.hpp"

// Initialize constants of window size and title
const int WINDOW_WIDTH = 800;
const int WINDOW_HEIGHT = 600;
const std::string WINDOW_TITLE = "Traffic Simulation";

// Initialize constants of the simulation
const int NUMBER_OF_CARS = 10;
const int CAR_SPEED = 1;
const int CAR_WIDTH = 50;
const int CAR_HEIGHT = 20;

// Main function
int main()
{
    // Initialize window at 60fps
    sf::RenderWindow window(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), WINDOW_TITLE);
    window.setFramerateLimit(60);

    // Window loop
    while (window.isOpen())
    {
        // Event loop
        sf::Event event;
        while (window.pollEvent(event))
        {
            // Close window
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }

        // Clear window
        window.clear();

        // Display window
        window.display();
    }

}