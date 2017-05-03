/**
 * CSC 335 - Analysis of Algorithms
 * Programming Assignment 2
 * Jan-Lucas Fitzquadragesimus Ott, Anthony Fitzquadragesimus Pompili, David Quadragesimus Shull
 * May 5, 2017
*/

#include <stdio.h>
#include "read_array.c"
#include "swap.c"
#include "printArray.c"
#include "check.c"

int partition(int* array, int low, int high) {
    int pivot = array[high];
    int i = low;
    for(int j = low; j < high; j++) {
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
