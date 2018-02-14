#ifndef SHAPE_HPP
  #define SHAPE_HPP

#include "base-types.hpp"

class Shape
{
  virtual double getArea() = 0;
  virtual rectangle_t getFrameRect() = 0;
  virtual void move( point_t ) = 0;
  virtual void move( double, double) = 0;
  virtual void print_info( ) = 0;
  virtual void print_coordinates( ) = 0;
};

#endif //SHAPE_HPP
