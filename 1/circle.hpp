#ifndef CIRCLE_HPP
  #define CIRCLE_HPP

#include "shape.hpp"

class Circle : public Shape
{
public:
  double getArea( );
  rectangle_t getFrameRect( );
  void move( point_t );
  void move( double x_offset, double y_offset );
  void print_info( );
  void print_coordinates( );

  explicit Circle( point_t center, double radius );

private:
  point_t center_point;
  double radius;
};

#endif //CIRCLE_HPP
