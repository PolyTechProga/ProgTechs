#ifndef CIRCLE_HPP
  #define CIRCLE_HPP

#include "shape.hpp"

class Circle : public Shape
{
public:
  const double getArea( ) override;
  const rectangle_t getFrameRect( ) override;
  void move( point_t ) override;
  void move( double x_offset, double y_offset ) override;
  const void printInfo( ) override;
  const void printCoordinates( ) override;

  Circle( point_t center, double radius );

private:
  point_t center_point_;
  double radius_;
};

#endif //CIRCLE_HPP
