#ifndef CIRCLE_HPP
  #define CIRCLE_HPP

#include "shape.hpp"

class Circle : public Shape
{
public:
  double getArea( ) override;
  rectangle_t getFrameRect( ) override;
  void move( point_t ) override;
  void move( double x_offset, double y_offset ) override;
  void print_info( ) override;
  void print_coordinates( ) override;

  explicit Circle( point_t center, double radius );

private:
  point_t center_point;
  double radius;
};

#endif //CIRCLE_HPP
