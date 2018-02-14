#ifndef INPUT_HPP
  #define INPUT_HPP

#include <ios>  // Provides ios_base::failure
#include <iostream>  // Provides cin

#include "input.hpp"

template <typename T>
T readFromStdIn()
{
  T result;
  std::cin >> result;

  // Checking all symbols in stdin. If failbit set (wrong input type).
  if ( std::cin.fail() || std::cin.get() != '\n' )
  {
    // Clearing failbit
    std::cin.clear();

    // Clearing stdin
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
      result = readFromStdIn<double>( );

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
