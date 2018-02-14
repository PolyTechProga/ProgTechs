#ifndef RECTANGLE_HPP
  #define RECTANGLE_HPP

#include "shape.hpp"

class Rectangle : public Shape
{
public:
  const double getArea( ) override;
  const rectangle_t getFrameRect( ) override;

  explicit Rectangle( rectangle_t );

  void move( point_t ) override;
  void move( double x_offset, double y_offset ) override;
  const void printInfo() override;
  const void printCoordinates() override;

private:
  rectangle_t circuit_;
};

#endif //RECTANGLE_HPP
