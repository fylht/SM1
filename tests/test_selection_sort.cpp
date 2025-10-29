#include "../sorting/include/selection_sort.h"
#include "./lib/catch.hpp"
#include "./lib/fn.h"
#include <vector>

TEST_CASE("Normal array - selection sort", "[selectionSort]") {
    int arr[] = { 5, 2, 9, 1, 5 };
    int expected[] = { 1, 2, 5, 5, 9 };
    selectionSort(arr, 5);
    REQUIRE(CompareArr(arr, expected));
}

TEST_CASE("Already array - selection sort", "[selectionSort]") {
    int arr[] = { 1, 2, 3, 4, 5 };
    int expected[] = { 1, 2, 3, 4, 5 };
    selectionSort(arr, 5);
    REQUIRE(CompareArr(arr, expected));
}

TEST_CASE("Normal double array - selection sort", "[selectionSort]") {
    int arr[] = { 5.7, 2.6, 9.9, 1.2, 5.3 };
    int expected[] = { 1.2, 2.6, 5.3, 5.7, 9.9 };
    selectionSort(arr, 5);
    REQUIRE(CompareArr(arr, expected));
}

TEST_CASE("Empty array - selection sort", "[selectionSort]") {
    int arr[8] = {};
    int expected[8] = {};
    selectionSort(arr, 8);
    REQUIRE(CompareArr(arr, expected));
}

TEST_CASE("Single element - selection sort", "[selectionSort]") {
    int arr[] = { 5 };
    int expected[] = { 5 };
    selectionSort(arr, 1);
    REQUIRE(CompareArr(arr, expected));
}


