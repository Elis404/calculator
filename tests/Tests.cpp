#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "../calculator.cpp"

TEST_CASE("addition testing") {
    SUBCASE("smth") CHECK(addition(1, 1) == 2);
    SUBCASE("smth") CHECK(addition(-1, 1) == 0);
    SUBCASE("smth") CHECK(addition(1, -1) == 0);
    SUBCASE("smth") CHECK(addition(-1, -1) == -2);
}

TEST_CASE("subtraction testing") {
    SUBCASE("smth") CHECK(subtraction(1, 1) == 0);
    SUBCASE("smth") CHECK(subtraction(-1, 1) == -2);
    SUBCASE("smth") CHECK(subtraction(1, -1) == 2);
    SUBCASE("smth") CHECK(subtraction(-1, -1) == 0);
}

TEST_CASE("multiplication testing") {
    SUBCASE("smth") CHECK(multiplication(3, 3) == 9);
    SUBCASE("smth") CHECK(multiplication(-3, 3) == -9);
    SUBCASE("smth") CHECK(multiplication(3, -3) == -9);
    SUBCASE("smth") CHECK(multiplication(-3, -3) == 9);
}

TEST_CASE("division testing") {
    SUBCASE("smth") CHECK(division(3, 3) == 1);
    SUBCASE("smth") CHECK(division(-3, 3) == -1);
    SUBCASE("smth") CHECK(division(3, -3) == -1);
    SUBCASE("smth") CHECK(division(-3, -3) == 1);
}

TEST_CASE("percent testing") {
    SUBCASE("smth") CHECK(percent_of(1) == 0.01);
    SUBCASE("smth") CHECK(percent_of(50) == 0.5);
    SUBCASE("smth") CHECK(percent_of(75) == 0.75);
    SUBCASE("smth") CHECK(percent_of(100) == 1);
}

TEST_CASE("pow testing") {
    SUBCASE("smth") CHECK(pow(1, 0) == 1);
    SUBCASE("smth") CHECK(pow(1, 3) == 1);
    SUBCASE("smth") CHECK(pow(2, 0) == 1);
    SUBCASE("smth") CHECK(pow(2, 2) == 4);
    SUBCASE("smth") CHECK(pow(2, 10) == 1024);
}

TEST_CASE("factorial testing") {
    SUBCASE("smth") CHECK(factorial(1) == 1);
    SUBCASE("smth") CHECK(factorial(2) == 2);
    SUBCASE("smth") CHECK(factorial(3) == 6);
    SUBCASE("smth") CHECK(factorial(5) == 120);
    SUBCASE("smth") CHECK(factorial(8) == 40320);
}




