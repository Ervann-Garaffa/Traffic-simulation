#include "Includes.hpp"

// Create a class of Car with the following attributes:
// - Position
// - Speed
// - TargetSpeed
// - MaxAcceleration
// - MaxDeceleration
// - IsCollidingWithOtherCar

class Car
{
private:
    sf::Vector2f position;
    float speed;
    float targetSpeed;
    float maxAcceleration;
    float maxDeceleration;
    bool isCollidingWithOtherCar;

    sf::RectangleShape carShape;

public:
    Car();
    ~Car();
};
