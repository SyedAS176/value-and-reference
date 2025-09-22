#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include <iostream>
#include <cassert>
#include "valueAndRef.hpp"

TEST_CASE("addByRef increments the value directly (by reference)") {
    int num = 5;
    addByRef(num);
    REQUIRE(num == 6);

    addByRef(num);
    REQUIRE(num == 7);
}

TEST_CASE("addByValue returns incremented value without modifying original") {
    int num = 10;
    int result = addByValue(num);

    REQUIRE(result == 11);
    REQUIRE(num == 10);  // original should not change since we added by value
}