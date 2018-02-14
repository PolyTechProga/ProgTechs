#include <iostream>

#include "tests.hpp"
#include "rectangle.hpp"
#include "input.hpp"

Rectangle testCreatingRectangle( )
{
  double rectangle_width;
  double rectangle_height;

  while ( true )
  {
    std::cout << "Enter width of the rectangle: ";

    try
    {
      rectangle_width = getValidatedInput<double>();

      while ( rectangle_width < 0 )
      {
        throw std::ios_base::failure("Wrong value.");
      }
    }
    catch ( std::exception const &e )
    {
      std::cerr << e.what() << std::endl;

      continue;
    }

    break;
  }

  std::cout << "Enter height of the rectangle: ";
  std::cin  >> rectangle_height;
  while ( rectangle_height < 0 )
  {
    std::cout << "Wrong value. Please, enter height of the rectangle again: ";
    std::cin  >> rectangle_height;
  }

  double rectangle_center_position_x;
  double rectangle_center_position_y;
  std::cout << "Enter x coordinate of the rectangle's center: ";
  std::cin  >> rectangle_center_position_x;

  std::cout << "Enter y coordinate of the rectangle's center: ";
  std::cin  >> rectangle_center_position_y;

  point_t rectangle_circuit_center = { rectangle_center_position_x, rectangle_center_position_y };
  rectangle_t rectangle_circuit = { rectangle_width, rectangle_height, rectangle_circuit_center };

  Rectangle rectangle = Rectangle(rectangle_circuit);
  rectangle.print_info();
  rectangle.print_coordinates();

  return rectangle;
}

Circle testCreatingCircle()
{
  double circle_radius;
  std::cout << "Enter radius of the circle: ";
  std::cin  >> circle_radius;

  double circle_center_position_x;
  double circle_center_position_y;

  std::cout << "Enter x coordinate of the circle's center: ";
  std::cin  >> circle_center_position_x;

  std::cout << "Enter y coordinate of the circle's center: ";
  std::cin  >> circle_center_position_y;

  point_t circle_center = { circle_center_position_x, circle_center_position_y };

  Circle circle = Circle(circle_center, circle_radius);
  circle.print_info();
  circle.print_coordinates();

  return circle;
}

void testMovingRectangle(Rectangle &rectangle) {
  std::cout << "1st. Moving rectangle by shifting its center to the new position." << std::endl;

  double rectangle_new_center_position_x;
  double rectangle_new_center_position_y;

  std::cout << "Enter x coordinate of the new rectangle's center: ";
  std::cin  >> rectangle_new_center_position_x;

  std::cout << "Enter y coordinate of the new rectangle's center: ";
  std::cin  >> rectangle_new_center_position_y;

  point_t rectangle_new_center = { rectangle_new_center_position_x, rectangle_new_center_position_y };

  rectangle.move( rectangle_new_center );

  std::cout << "After moving:" << std::endl;
  rectangle.print_info();
  rectangle.print_coordinates();

  std::cout << "2nd. Moving rectangle by shifting its center coordinates to some values." << std::endl;

  double rectangle_center_position_x_offset;
  double rectangle_center_position_y_offset;

  std::cout << "Enter x offset for the rectangle's center: ";
  std::cin  >> rectangle_center_position_x_offset;

  std::cout << "Enter y offset for the rectangle's center: ";
  std::cin  >> rectangle_center_position_y_offset;

  rectangle.move( rectangle_center_position_x_offset, rectangle_center_position_y_offset );

  std::cout << "After moving:" << std::endl;
  rectangle.print_info();
  rectangle.print_coordinates();
}

void testMovingCircle(Circle &circle) {
  std::cout << "1st. Moving circle by shifting its center to the new position." << std::endl;

  double circle_new_center_position_x;
  double circle_new_center_position_y;

  std::cout << "Enter x coordinate of the new circle's center: ";
  std::cin  >> circle_new_center_position_x;

  std::cout << "Enter y coordinate of the new circle's center: ";
  std::cin  >> circle_new_center_position_y;

  point_t circle_new_center = { circle_new_center_position_x, circle_new_center_position_y };

  circle.move( circle_new_center );

  std::cout << "After moving:" << std::endl;
  circle.print_info();
  circle.print_coordinates();

  std::cout << "2nd. Moving circle by shifting its center coordinates to some values." << std::endl;

  double circle_center_position_x_offset;
  double circle_center_position_y_offset;

  std::cout << "Enter x offset for the circle's center: ";
  std::cin  >> circle_center_position_x_offset;

  std::cout << "Enter y offset for the circle's center: ";
  std::cin  >> circle_center_position_y_offset;

  circle.move( circle_center_position_x_offset, circle_center_position_y_offset );

  std::cout << "After moving:" << std::endl;
  circle.print_info();
  circle.print_coordinates();
}

