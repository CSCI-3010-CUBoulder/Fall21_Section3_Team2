#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>

TEST_CASE ("Fibonacci Sequence", "[NthFibonacci]"){
    REQUIRE(NthFibonacci(1) == 1);
    REQUIRE(NthFibonacci(8) == 21);
    REQUIRE(NthFibonacci(5) == 5);
}