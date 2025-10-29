#include "../include/bubble_sort.h"

template <typename T>
void bubbleSort(T* arr, size_t size) {
    for (size_t i = 0; i < size; ++i) {
        for (size_t j = 1; j < size - i; ++j) {
            if (arr[j - 1] > arr[j]) {
                T temp = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

template void bubbleSort<int>(int*, size_t);
template void bubbleSort<double>(double*, size_t);