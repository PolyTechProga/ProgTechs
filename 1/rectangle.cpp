#include <iostream>

#include "rectangle.hpp"

double Rectangle::getArea( )
{
  return circuit.width * circuit.height;
}

rectangle_t Rectangle::getFrameRect( )
{
  return circuit;
}

void Rectangle::move( const point_t new_position )
{
  circuit.pos = new_position;
}

void Rectangle::move( const double x_offset, const double y_offset )
{
  circuit.pos.x += x_offset;
  circuit.pos.y += y_offset;
}

Rectangle::Rectangle( const rectangle_t initial_value ) : circuit( initial_value )
{
  // initially left blank
}

void Rectangle::print_info( )
{
  std::cout << "Rectangle: [area: " << getArea();
  std::cout << "; width: " << getFrameRect().width;
  std::cout << "; height: " << getFrameRect().height;
  std::cout << "]"  << std::endl;
}

void Rectangle::print_coordinates( )
{
  std::cout << "Center position: (" << getFrameRect().pos.x;
  std::cout << "; " << getFrameRect().pos.y;
  std::cout << ")"  << std::endl;
}
