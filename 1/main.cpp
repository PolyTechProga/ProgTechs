#include <iostream>

#include "rectangle.hpp"
#include "circle.hpp"
#include "input.hpp"

int main() {
  std::cout << "Creating the Rectangle..." << std::endl;
  Rectangle rectangle = createRectangle();

  std::cout << "Creating the Circle..." << std::endl;
  Circle circle = createCircle();

  std::cout << "Moving the Rectangle.." << std::endl;
  moveRectangle(rectangle);

  std::cout << "Moving the Circle..." << std::endl;
  moveCircle(circle);

  return 0;
}