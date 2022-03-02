#include "flights.hpp"
#include "queries.hpp"
#include "seats.hpp"
#include <cassert>
#include <iostream>

int main() {
  std::error_code ec = FlightsErrc::NoFlightsFound;
  assert(ec != FlightsErrc::ResourceError);
  assert(ec == FailureSource::NoSolution);
  assert(ec != FailureSource::BadUserInput);

  ec = SeatsErrc::NonexistentClass;
  assert(ec != FailureSource::NoSolution);
  assert(ec == FailureSource::BadUserInput);

  std::cout << ec << std::endl;
}