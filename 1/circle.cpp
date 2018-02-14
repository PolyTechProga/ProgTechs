#include "circle.hpp"

#include <iostream>
#include <cmath>

const double Circle::getArea( )
{
  return M_PI * pow(radius_, 2);
}

const rectangle_t Circle::getFrameRect( )
{
  return rectangle_t { radius_ * 2, radius_ * 2, center_point_ };
}

void Circle::move( const point_t new_position )
{
  center_point_ = new_position;
}

void Circle::move( const double x_offset, const double y_offset )
{
  center_point_.x += x_offset;
  center_point_.y += y_offset;
}

Circle::Circle( const point_t center, double radius ) : center_point_( center ),
                                                        radius_( radius )
{
  // initially left blank
}

const void Circle::printInfo()
{
  std::cout << "Circle: [area: " << getArea();
  std::cout << "; width: "  << getFrameRect().width;
  std::cout << "; height: " << getFrameRect().height;
  std::cout << "; radius_: " << radius_;
  std::cout << "]" << std::endl;
}

const void Circle::printCoordinates()
{
  std::cout << "Center position: (" << getFrameRect().pos.x;
  std::cout << "; " << getFrameRect().pos.y;
  std::cout << ")"  << std::endl;
}
