#include <iostream>
#include <random>     //random numbers
#include <functional> //std::bind
#include <SFML/Window.hpp>
#include <boost/range/algorithm.hpp>

#include "Ball.hpp"
#include "Const.hpp"
#include "Player.hpp"
#include "Food.hpp"
#include "Gamer.hpp"

class Game
{
public:
    Game();
    void init(sf::RenderWindow &);
    Gamer pilka(float x, float y, float r, int red, int green, int blue);
    int spamsize;
    std::vector<Food> spam;
    ~Game();
};
