#pragma once
#include <system_error>
#include <type_traits>
enum class SeatsErrc {
  // no 0
  InvalidRequest = 1, // e.g., bad XML
  CouldNotConnect,    // could not connect to server
  InternalError,      // service run short of resources
  NoResponse,         // did not respond in time
  NonexistentClass,   // requested class does not exist
  NoSeatAvailable,    // all seats booked
};

namespace std {
template <> struct is_error_code_enum<SeatsErrc> : std::true_type {};
} // namespace std

std::error_code make_error_code(SeatsErrc);
