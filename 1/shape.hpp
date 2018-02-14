#ifndef SHAPE_HPP
  #define SHAPE_HPP

#include "base-types.hpp"

class Shape
{
  virtual const double getArea( ) = 0;
  virtual const rectangle_t getFrameRect( ) = 0;
  virtual void move( point_t ) = 0;
  virtual void move( double, double) = 0;
  virtual const void printInfo( ) = 0; // current shape's properties
  virtual const void printCoordinates( ) = 0; // current shape's center position
};

#endif //SHAPE_HPP
