
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <iostream>
#include <vector>





  TEST_CASE ("CHECK INTEGER PARITY", "[Sign]")
{
    CHECK(Sign(3) == 1);
    REQUIRE(Sign(1) == 1);
    REQUIRE(Sign(-1) == -1);
    REQUIRE(Sign(2) == 1);
    REQUIRE(Sign(-2) == -1);
    REQUIRE(Sign(0) == 1);
}
