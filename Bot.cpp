#include "Bot.hpp"

Bot::Bot(float x, float y, float r, int red, int green, int blue) : Player(x, y, r, red, green, blue) {}

void Bot::movement(sf::RenderWindow& window, Player& pilka)
{

    direction = normalize(pilka.returnPosition() - returnPosition());

    if (pilka.returnRadius() >= r_)
    {

        if ((distanceTo(pilka.returnPosition())-r_-pilka.returnRadius()) < chasingDistance) 
        {

            shape_.move(-direction.x*velocity*botVelocityFactor, -direction.y*velocity*botVelocityFactor);
            /*
            diff_x = distanceTo(pilka) static_cast<float>(playerPosition.x) - shape_.getPosition().x;
            diff_y = static_cast<float>(playerPosition.y) - shape_.getPosition().y;


            shape_.move()*/
        
            std::cout << "chuj " << ++test << std::endl;
        }

    } else shape_.move(direction.x*velocity*botVelocityFactor, direction.y*velocity*botVelocityFactor);


    /*
    if (player_r > 2*r_)
    {
        diff_x = static_cast<float>(playerPosition.x) - shape_.getPosition().x;
        diff_y = static_cast<float>(playerPosition.y) - shape_.getPosition().y;
        if(sqrt(pow(diff_x, 2.0)+pow(diff_y, 2.0)) > 100.0)
        {
            shape_.move(velocity*diff_x*0.8,velocity*diff_y*0.8);
        } else shape_.move(velocity*diff_x,velocity*diff_y);
    }
    else
    {
        shape_.move(0, 0);
    }*/
}


Bot::~Bot() {}
