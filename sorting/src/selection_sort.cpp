#include "selection_sort.h"

template <typename T>
void selectionSort(T* arr, size_t size) {
    for (size_t i = 0; i < size; ++i) {
        size_t minIdx = i;
        for (size_t j = i + 1; j < size; ++j) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        if (minIdx != i) {
            T temp = arr[i];
            arr[i] = arr[minIdx];
            arr[minIdx] = temp;
        }
    }
}

template void selectionSort<int>(int*, size_t);
template void selectionSort<double>(double*, size_t);
