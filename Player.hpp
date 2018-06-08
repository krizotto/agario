#pragma once

/**
*   \file
*   \brief A Player class definition
*/

#include <iostream>
#include <SFML/Window.hpp>
#include <SFML/OpenGL.hpp>
#include <SFML/Graphics.hpp>
#include <math.h>
#include "Ball.hpp"
#include "Food.hpp"
#include "Const.hpp"

/** \class Player
*   The Player class defines all of the abilities that has a moving ball.
*   As said: all of moving balls have the ability to:
*   - move
*   - grow
*   - intersect with other Balls
*/
class Player : public Ball
{
public:
    /** A  Player class constructor
    *   @param x a float percentage number that defines horizontal position
    *   @param y a float percentage number that defines vertical position
    *   @param r a float number representing radius of a balls
    *   @param red a integer number representing red color in RGB
    *   @param green a integer number representing green color in RGB
    *   @param blue a integer number representing blue color in RGB
    */
    Player (float x, float y, float r, int red, int green, int blue);
    float velocity; /**< a float number representing player's velocity*/
    bool wyn; /**< co do chuja to jest? */
    /** Counts distance to other ball object
    *   @param b_ a Ball class object that will distance refer to
    */
    float distanceTo(Ball& b_);
    /** Checks if player's and other ball have intersect region
    *   @param b_ a Ball class object that will intersect refer to
    *   @param proportion a const float reference defining how much intersection is needed to be "intersected"
    */
    bool intersect(Ball& b_, const float &proportion);
    /** Makes ball growing
    *   @param f a Food class object that is being "eaten" by Player's balls
    */
    void growing(Food& f);
    /** A Player class destructor */
    ~Player ();
};
