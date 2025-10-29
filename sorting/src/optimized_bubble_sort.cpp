#include "../include/optimized_bubble_sort.h"

template <typename T>
void optimizedBubbleSort(T* arr, size_t size) {
    size_t n = size;
    bool swapped;
    do {
        swapped = false;
        for (size_t i = 1; i < n; ++i) {
            if (arr[i - 1] > arr[i]) {
                T temp = arr[i - 1];
                arr[i - 1] = arr[i];
                arr[i] = temp;
                swapped = true;
            }
        }
        --n;
    } while (swapped);
}

template void optimizedBubbleSort<int>(int*, size_t);
template void optimizedBubbleSort<double>(double*, size_t);