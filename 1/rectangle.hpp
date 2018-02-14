#ifndef RECTANGLE_HPP
  #define RECTANGLE_HPP

#include "shape.hpp"

class Rectangle : public Shape
{
public:
  double getArea( );
  rectangle_t getFrameRect( );
  void move( point_t );
  void move( double x_offset, double y_offset );
  void print_info( );
  void print_coordinates( );

  explicit Rectangle( rectangle_t );

private:
  rectangle_t circuit;
};

#endif //RECTANGLE_HPP
