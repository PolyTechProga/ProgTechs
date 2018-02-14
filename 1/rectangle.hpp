#ifndef RECTANGLE_HPP
  #define RECTANGLE_HPP

#include "shape.hpp"

class Rectangle : public Shape
{
public:
  double getArea( ) override;
  rectangle_t getFrameRect( ) override;
  void move( point_t ) override;
  void move( double x_offset, double y_offset ) override;
  void print_info( ) override;
  void print_coordinates( ) override;

  explicit Rectangle( rectangle_t );

private:
  rectangle_t circuit;
};

#endif //RECTANGLE_HPP
