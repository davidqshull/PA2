/**
 * CSC 335 - Analysis of Algorithms
 * Programming Assignment 2
 * Jan-Lucas Fitzquadragesimus Ott, Anthony Fitzquadragesimus Pompili, David Quadragesimus Shull
 * May 5, 2017
*/

#include <stdio.h>
#include "read_array.c"
#include "random.c"
#include "printArray.c"
#include "swap.c"
#include "check.c"

int partition(int* array, int low, int high) {

    int pivotIdx = randomInt(low, high);

    int pivot = array[pivotIdx];
    int i = low;
    int j = high-1;

    swap(pivotIdx, high, array);

    while(i <= j) {
        while(array[i] < pivot)
            i++;
        while(array[j] > pivot)
            j--;
        if(i <= j) {
            swap(i, j, array);
            i++;
            j--;
        }
    }

    swap(i, high, array);
    return (i);
}

void quicksort(int* array, int low, int high) {
    if(low < high) {
        int p = partition(array, low, high);
        quicksort(array, low, p - 1);
        quicksort(array, p + 1, high);
    }
}

int main(void) {
    int size = 10;
    //int* array = read_array(&size);
    printf("\nTest HRandom\n");
    int array[10] = {1000, 23, 724, 278319, 1232, 23, 2342, 8, 109, 500};
    printf("Input:\t");
    printArray(array, size);
    quicksort(array, 0, size-1);
    printf("Output:\t");
    printArray(array, size);
    check(array, size);
}
