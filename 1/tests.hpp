#ifndef TESTS_HPP
  #define TESTS_HPP

#define CAN_BE_NEGATIVE true
#define CAN_NOT_BE_NEGATIVE false

#include "rectangle.hpp"
#include "circle.hpp"

Rectangle testCreatingRectangle();
Circle    testCreatingCircle();
void testMovingRectangle(Rectangle &);
void testMovingCircle(Circle &);

#endif //TESTS_HPP
