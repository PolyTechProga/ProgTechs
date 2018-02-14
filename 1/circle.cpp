#include <iostream>
#include <cmath>

#include "circle.hpp"

double Circle::getArea( )
{
  return M_PI * pow(radius, 2);
}

rectangle_t Circle::getFrameRect( )
{
  return rectangle_t { radius * 2, radius * 2, center_point };
}

void Circle::move( const point_t new_position )
{
  center_point = new_position;
}

void Circle::move( const double x_offset, const double y_offset )
{
  center_point.x += x_offset;
  center_point.y += y_offset;
}

Circle::Circle( const point_t center, double radius ) : center_point( center ),
                                                        radius( radius )
{
  // initially left blank
}

void Circle::print_info( )
{
  std::cout << "Circle: [area: " << getArea();
  std::cout << "; width: "  << getFrameRect().width;
  std::cout << "; height: " << getFrameRect().height;
  std::cout << "; radius: " << radius;
  std::cout << "]"  << std::endl;
}

void Circle::print_coordinates( )
{
  std::cout << "Center position: (" << getFrameRect().pos.x;
  std::cout << "; " << getFrameRect().pos.y;
  std::cout << ")"  << std::endl;
}
