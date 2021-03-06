/**
 * CSC 335 - Analysis of Algorithms
 * Programming Assignment 2
 * Jan-Lucas Fitzquadragesimus Ott, Anthony Fitzdmitris Pompili, David Quadragesimus Shull
 * May 5, 2017
*/

#include <stdio.h>
#include "read_array.c"
#include "median.c"
#include "swap.c"
#include "printArray.c"

int partition(int* array, int low, int high) {
    int pivotIdx = median(low, high, array);
    int pivot = array[pivotIdx];
    swap(pivotIdx, high, array);
    int j, i = low;
    for(j = low; j < high; j++) {
        if(array[j] <= pivot) {
            swap(i, j, array);
            i++;
        }
    }
    swap(i, high, array);
    return i;
}

void quicksort(int* array, int low, int high) {
    if(low < high) {
        int p = partition(array, low, high);
        quicksort(array, low, p - 1);
        quicksort(array, p + 1, high);
    }
}

int main(void) {
    int size;
    int* array = read_array(&size);
    quicksort(array, 0, size-1);
    printArray(array, size);
}
