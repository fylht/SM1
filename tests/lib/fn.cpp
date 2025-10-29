#include "fn.h"

template <typename T>
bool CompareArr(T* arr,T* expected) {
	size_t size = sizeof(arr) / sizeof(arr[0]);
	return std::equal(arr, arr + size, expected);
}

template bool CompareArr<int>(int* arr, int* expected);
template bool CompareArr<double>(double* arr, double* expected);