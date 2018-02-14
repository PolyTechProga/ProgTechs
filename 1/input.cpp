#include "input.hpp"

#include <iostream>

#include "rectangle.hpp"

Rectangle createRectangle( )
{
  auto rectangle_width = getValidatedInput<double>( "Enter width of the rectangle: ",
                                                    CAN_NOT_BE_NEGATIVE );
  auto rectangle_height = getValidatedInput<double>( "Enter height of the rectangle: ",
                                                     CAN_NOT_BE_NEGATIVE);

  auto rectangle_center_position_x = getValidatedInput<double>( "Enter x coordinate of the rectangle's center: ",
                                                                CAN_BE_NEGATIVE );
  auto rectangle_center_position_y = getValidatedInput<double>( "Enter y coordinate of the rectangle's center: ",
                                                                CAN_BE_NEGATIVE );

  point_t rectangle_circuit_center = { rectangle_center_position_x, rectangle_center_position_y };
  rectangle_t rectangle_circuit = { rectangle_width, rectangle_height, rectangle_circuit_center };

  Rectangle rectangle = Rectangle(rectangle_circuit);
  rectangle.printInfo();
  rectangle.printCoordinates();

  return rectangle;
}

Circle createCircle( )
{
  auto circle_radius  = getValidatedInput<double>( "Enter radius_ of the circle: ",
                                                   CAN_NOT_BE_NEGATIVE );
  auto circle_center_position_x = getValidatedInput<double>( "Enter x coordinate of the circle's center: ",
                                                             CAN_BE_NEGATIVE );
  auto circle_center_position_y = getValidatedInput<double>( "Enter y coordinate of the circle's center: ",
                                                             CAN_BE_NEGATIVE );
  point_t circle_center = { circle_center_position_x, circle_center_position_y };

  Circle circle = Circle(circle_center, circle_radius);
  circle.printInfo();
  circle.printCoordinates();

  return circle;
}

void moveRectangle( Rectangle &rectangle )
{
  std::cout << "1st. Moving rectangle by shifting its center to the new position." << std::endl;

  auto rectangle_new_center_position_x = getValidatedInput<double>( "Enter x coordinate of the new rectangle's center: ",
                                                                    CAN_BE_NEGATIVE );
  auto rectangle_new_center_position_y = getValidatedInput<double>( "Enter y coordinate of the new rectangle's center: ",
                                                                    CAN_BE_NEGATIVE );

  point_t rectangle_new_center = { rectangle_new_center_position_x, rectangle_new_center_position_y };

  rectangle.move( rectangle_new_center );

  std::cout << "After moving:" << std::endl;
  rectangle.printInfo();
  rectangle.printCoordinates();

  std::cout << "2nd. Moving rectangle by shifting its center coordinates to some values." << std::endl;

  auto rectangle_center_position_x_offset = getValidatedInput<double>( "Enter x offset for the rectangle's center: ",
                                                                       CAN_BE_NEGATIVE );
  auto rectangle_center_position_y_offset = getValidatedInput<double>( "Enter y offset for the rectangle's center: ",
                                                                       CAN_BE_NEGATIVE );

  rectangle.move( rectangle_center_position_x_offset, rectangle_center_position_y_offset );

  std::cout << "After moving:" << std::endl;
  rectangle.printInfo();
  rectangle.printCoordinates();
}

void moveCircle( Circle &circle )
{
  std::cout << "1st. Moving circle by shifting its center to the new position." << std::endl;

  auto circle_new_center_position_x = getValidatedInput<double>( "Enter x coordinate of the new circle's center: ",
                                                                 CAN_BE_NEGATIVE );
  auto circle_new_center_position_y = getValidatedInput<double>( "Enter y coordinate of the new circle's center: ",
                                                                 CAN_BE_NEGATIVE );

  point_t circle_new_center = { circle_new_center_position_x, circle_new_center_position_y };

  circle.move( circle_new_center );

  std::cout << "After moving:" << std::endl;
  circle.printInfo();
  circle.printCoordinates();

  std::cout << "2nd. Moving circle by shifting its center coordinates to some values." << std::endl;

  auto circle_center_position_x_offset = getValidatedInput<double>( "Enter x offset for the circle's center: ",
                                                                    CAN_BE_NEGATIVE );
  auto circle_center_position_y_offset = getValidatedInput<double>( "Enter y offset for the circle's center: ",
                                                                    CAN_BE_NEGATIVE );

  circle.move( circle_center_position_x_offset, circle_center_position_y_offset );

  std::cout << "After moving:" << std::endl;
  circle.printInfo();
  circle.printCoordinates();
}
