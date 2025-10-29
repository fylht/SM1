
#include "catch.hpp"
#include "optimized_bubble_sort.h"
#include "fn.h"
#include <vector>

TEST_CASE("Normal array - optimized bubble sort", "[optimizedBubbleSort]") {
    int arr[] = { 5, 2, 9, 1, 5 };
    int expected[] = { 1, 2, 5, 5, 9 };
    optimizedBubbleSort(arr, 5);
    REQUIRE(CompareArr(arr, expected));
}

TEST_CASE("Already array - optimized bubble sort", "[optimizedBubbleSort]") {
    int arr[] = { 1, 2, 3, 4, 5 };
    int expected[] = { 1, 2, 3, 4, 5 };
    optimizedBubbleSort(arr, 5);
    REQUIRE(CompareArr(arr, expected));
}

TEST_CASE("Normal double array - optimized bubble sort", "[optimizedBubbleSort]") {
    int arr[] = { 5.7, 2.6, 9.9, 1.2, 5.3 };
    int expected[] = { 1.2, 2.6, 5.3, 5.7, 9.9 };
    optimizedBubbleSort(arr, 5);
    REQUIRE(CompareArr(arr, expected));
}

TEST_CASE("Empty array - optimized bubble sort", "[optimizedBubbleSort]") {
    int arr[8] = {};
    int expected[8] = {};
    optimizedBubbleSort(arr, 8);
    REQUIRE(CompareArr(arr, expected));
}

TEST_CASE("Single element - optimized bubble sort", "[optimizedBubbleSort]") {
    int arr[] = { 5 };
    int expected[] = { 5 };
    optimizedBubbleSort(arr, 1);
    REQUIRE(CompareArr(arr, expected));
}

