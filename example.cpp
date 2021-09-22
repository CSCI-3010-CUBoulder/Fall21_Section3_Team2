#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>

TEST_CASE ( "FACTORIALS ARE COMPUTED","[factorial]") {
  CHECK (Factorial(0)==0);
  REQUIRE(Factorial(0)==1);
  REQUIRE(Factorial(1)==1);
}
  
TEST_CASE ("Check an integers parity", "[Sign]"){
    REQUIRE(Sign(1) == 1);
    REQUIRE(Sign(-1) == -1);
    REQUIRE(Sign(2) == 1);
    REQUIRE(Sign(-2) == -1);
    REQUIRE(Sign(0) == 1);
}

std::vector<int> v = {1,2,3,4,5};
std::vector<bool> v2 = {false,true,false,true,false};

TEST_CASE("EVEN MASK TEST", "[evenMask]"){
     CHECK(OddMask(v) == v2);
}

