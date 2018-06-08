#include "Player.hpp"


Player::Player(float x, float y, float r, int red, int green, int blue) : Ball(x, y, r, red, green, blue)
{
    shape_.setOutlineColor(sf::Color::White);
    shape_.setOutlineThickness(-shape_.getRadius()/20);
    velocity = velocityFactor / r_;
}

Player::~Player() {}

float Player::distanceTo(Ball& b_)
{
    return sqrtf(pow((b_.returnPosition().x-returnPosition().x),2.0f) + pow((b_.returnPosition().y-returnPosition().y),2.0f) );
}

bool Player::intersect(Ball& b_, float proportion)
{
    diff = shape_.getRadius() - proportion*b_.shape_.getRadius();

    if (diff > distanceTo(b_))
    {
          r_ += growthFactor;
          velocity = velocityFactor / r_;
    };
    return diff > d;
}
