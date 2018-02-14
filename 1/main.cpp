#include <iostream>
#include "rectangle.hpp"
#include "circle.hpp"
#include "tests.hpp"

int main() {
  std::cout << "Creating the rectangle..." << std::endl;
  Rectangle rectangle = testCreatingRectangle();

  std::cout << "Creating the circle..." << std::endl;
  Circle    circle    = testCreatingCircle();

  testMovingRectangle(rectangle);

  testMovingCircle(circle);

  return 0;
}