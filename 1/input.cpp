#include <ios>  // Provides ios_base::failure
#include <iostream>  // Provides cin

#include "input.hpp"

template <typename T>
T getValidatedInput()
{
  // Get input of type T
  T result;
  std::cin >> result;

  // Check if the failbit has been set, meaning the beginning of the input
  // was not type T. Also make sure the result is the only thing in the input
  // stream, otherwise things like 2b would be a valid int.
  if ( std::cin.fail() || std::cin.get() != '\n' )
  {
    // Set the error state flag back to goodbit. If you need to get the input
    // again (e.g. this is in a while loop), this is essential. Otherwise, the
    // failbit will stay set.
    std::cin.clear();

    // Clear the input stream using and empty while loop.
    while ( std::cin.get() != '\n' );

    // Throw an exception. Allows the caller to handle it any way you see fit
    // (exit, ask for input again, etc.)
    throw std::ios_base::failure("Wrong value.");
  }

  return result;
}