#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>

TEST_CASTE ( "FACTORIALS ARE COMPUTED","[factorial]") {
  REQUIRE(Factorial(0)==1);
  REQUIRE(Factorial(1)==1);
  
  
}
