#include "rectangle.hpp"

#include <iostream>

const double Rectangle::getArea( )
{
  return circuit_.width * circuit_.height;
}

const rectangle_t Rectangle::getFrameRect( )
{
  return circuit_;
}

void Rectangle::move( const point_t new_position )
{
  circuit_.pos = new_position;
}

void Rectangle::move( const double x_offset, const double y_offset )
{
  circuit_.pos.x += x_offset;
  circuit_.pos.y += y_offset;
}

Rectangle::Rectangle( const rectangle_t initial_value ) : circuit_( initial_value )
{
  // initially left blank
}

const void Rectangle::printInfo()
{
  std::cout << "Rectangle: [area: " << getArea();
  std::cout << "; width: " << getFrameRect().width;
  std::cout << "; height: " << getFrameRect().height;
  std::cout << "]"  << std::endl;
}

const void Rectangle::printCoordinates()
{
  std::cout << "Center position: (" << getFrameRect().pos.x;
  std::cout << "; " << getFrameRect().pos.y;
  std::cout << ")"  << std::endl;
}
