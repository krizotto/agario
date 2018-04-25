#pragma once

#include <iostream>
#include <SFML/Window.hpp>
#include <SFML/OpenGL.hpp>
#include <SFML/Graphics.hpp>

class Ball {
private:
  sf::CircleShape shape_;
public:
  Ball (float , float , float, int, int, int );
  sf::CircleShape get(); //public access to shape_

//Player's ball
 void makeFancy();


  // virtual void update() = 0;
  ~Ball ();
};
