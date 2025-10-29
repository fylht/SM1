#include "../include/insertion_sort.h"

template <typename T>
void insertionSort(T* arr, size_t size) {
    for (size_t i = 1; i < size; ++i) {
        T tmp = arr[i];
        size_t j = i;
        while (j > 0 && arr[j - 1] > tmp) {
            arr[j] = arr[j - 1];
            --j;
        }
        arr[j] = tmp;
    }
}

template void insertionSort<int>(int*, size_t);
template void insertionSort<double>(double*, size_t);
