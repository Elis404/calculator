#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "../calculator.cpp"

TEST_CASE("addition testing") {
    CHECK(addition(1, 1) == 2);
    CHECK(addition(-1, 1) == 0);
    CHECK(addition(1, -1) == 0);
    CHECK(addition(-1, -1) == -2);
}

TEST_CASE("subtraction testing") {
    CHECK(subtraction(1, 1) == 0);
    CHECK(subtraction(-1, 1) == -2);
    CHECK(subtraction(1, -1) == 2);
    CHECK(subtraction(-1, -1) == 0);
}

TEST_CASE("multiplication testing") {
    CHECK(multiplication(3, 3) == 9);
    CHECK(multiplication(-3, 3) == -9);
    CHECK(multiplication(3, -3) == -9);
    CHECK(multiplication(-3, -3) == 9);
}

TEST_CASE("division testing") {
    CHECK(division(3, 3) == 1);
    CHECK(division(-3, 3) == -1);
    CHECK(division(3, -3) == -1);
    CHECK(division(-3, -3) == 1);
}

TEST_CASE("percent testing") {
    CHECK(percent_of(1) == 0.01);
    CHECK(percent_of(50) == 0.5);
    CHECK(percent_of(75) == 0.75);
    CHECK(percent_of(100) == 1);
}

TEST_CASE("pow testing") {
    CHECK(pow(1, 0) == 1);
    CHECK(pow(1, 3) == 1);
    CHECK(pow(2, 0) == 1);
    CHECK(pow(2, 2) == 4);
    CHECK(pow(2, 10) == 1024);
}

TEST_CASE("factorial testing") {
    CHECK(factorial(1) == 1);
    CHECK(factorial(2) == 2);
    CHECK(factorial(3) == 6);
    CHECK(factorial(5) == 120);
    CHECK(factorial(8) == 40320);
}




