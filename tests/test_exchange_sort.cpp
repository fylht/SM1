#include "../sorting/include/exchange_sort.h"
#include "./lib/catch.hpp"
#include "./lib/fn.h"
#include <vector>

TEST_CASE("Normal array - exchange sort", "[exchangeSort]") {
    int arr[] = {5, 2, 9, 1, 5 };
    int expected[] = { 1, 2, 5, 5, 9 };
    exchangeSort(arr, 5);
    REQUIRE(CompareArr(arr, expected));
}

TEST_CASE("Already array - exchange sort", "[exchangeSort]") {
    int arr[] = { 1, 2, 3, 4, 5 };
    int expected[] = { 1, 2, 3, 4, 5 };
    exchangeSort(arr, 5);
    REQUIRE(CompareArr(arr, expected));
}

TEST_CASE("Normal double array - exchange sort", "[exchangeSort]") {
    int arr[] = { 5.7, 2.6, 9.9, 1.2, 5.3 };
    int expected[] = { 1.2, 2.6, 5.3, 5.7, 9.9 };
    exchangeSort(arr, 5);
    REQUIRE(CompareArr(arr, expected));
}

TEST_CASE("Empty array - exchange sort", "[exchangeSort]") {
    int arr[8] = {};
    int expected[8] = {};
    exchangeSort(arr, 8);
    REQUIRE(CompareArr(arr, expected));
}

TEST_CASE("Single element - exchange sort", "[exchangeSort]") {
    int arr[] = {5};
    int expected[] = {5};
    exchangeSort(arr, 1);
    REQUIRE(CompareArr(arr, expected));
}


