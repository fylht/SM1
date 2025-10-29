#include "exchange_sort.h"

template <typename T>
void exchangeSort(T* arr, size_t size) {
    for (size_t i = 0; i < size; ++i) {
        for (size_t j = i + 1; j < size; ++j) {
            if (arr[j] < arr[i]) {
                T temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

template void exchangeSort<int>(int*, size_t);
template void exchangeSort<double>(double*, size_t);
