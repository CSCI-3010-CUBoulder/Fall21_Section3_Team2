#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>

TEST_CASE ( "FACTORIALS ARE COMPUTED","[factorial]") {
  CHECK (Factorial(0)==0);
  REQUIRE(Factorial(0)==1);
  REQUIRE(Factorial(1)==1);

  
}
