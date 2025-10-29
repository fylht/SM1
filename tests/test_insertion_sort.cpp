#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "insertion_sort.h"
#include "fn.h"
#include <vector>


TEST_CASE("Normal array - insertion sort", "[insertionSort]") {
    int arr[] = {5, 2, 9, 1, 5 };
    int expected[] = { 1, 2, 5, 5, 9 };
    insertionSort(arr, 5);
    REQUIRE(CompareArr(arr, expected));
}

TEST_CASE("Already array - insertion sort", "[insertionSort]") {
    int arr[] = { 1, 2, 3, 4, 5 };
    int expected[] = { 1, 2, 3, 4, 5 };
    insertionSort(arr, 5);
    REQUIRE(CompareArr(arr, expected));
}

TEST_CASE("Normal double array - insertion sort", "[insertionSort]") {
    int arr[] = { 5.7, 2.6, 9.9, 1.2, 5.3 };
    int expected[] = { 1.2, 2.6, 5.3, 5.7, 9.9 };
    insertionSort(arr, 5);
    REQUIRE(CompareArr(arr, expected));
}

TEST_CASE("Empty array - insertion sort", "[insertionSort]") {
    int arr[8] = {};
    int expected[8] = {};
    insertionSort(arr, 8);
    REQUIRE(CompareArr(arr, expected));
}

TEST_CASE("Single element - insertion sort", "[insertionSort]") {
    int arr[] = {5};
    int expected[] = {5};
    insertionSort(arr, 1);
    REQUIRE(CompareArr(arr, expected));
}


