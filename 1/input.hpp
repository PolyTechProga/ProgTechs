#ifndef INPUT_HPP
  #define INPUT_HPP

#define CAN_BE_NEGATIVE true
#define CAN_NOT_BE_NEGATIVE false

#include <ios>
#include <iostream>

#include "rectangle.hpp"
#include "circle.hpp"

Rectangle createRectangle( );
Circle createCircle( );
void moveRectangle( Rectangle & );
void moveCircle( Circle & );

template <typename T>
T readSafelyFromInputStream()
{
  T result;
  std::cin >> result;

  // Check all symbols in stdin. If failbit set (wrong input type).
  if ( std::cin.fail() || std::cin.get() != '\n' )
  {
    // Clear failbit
    std::cin.clear();

    // Clear stdin
    while ( std::cin.get() != '\n' );

    throw std::ios_base::failure("Wrong value");
  }

  return result;
}

template <typename T>
T getValidatedInput( const char *message, const bool negative_allowed )
{
  T result;

  while ( true )
  {
    std::cout << message;

    try
    {
      result = readSafelyFromInputStream<double>();

      while ( !negative_allowed && result < 0 )
      {
        throw std::ios_base::failure("Wrong value");
      }
    }
    catch ( std::exception const &e )
    {
      std::cerr << e.what() << std::endl;

      continue;
    }

    break;
  }

  return result;
}

#endif //INPUT_HPP
