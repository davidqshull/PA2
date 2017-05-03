/**
 * CSC 335 - Analysis of Algorithms
 * Programming Assignment 2
 * Jan-Lucas Fitzquadragesimus Ott, Anthony Fitzquadragesimus Pompili, David Quadragesimus Shull
 * May 5, 2017
*/

#include "printArray.c"

void swap(int i, int j, int* array) {
    int temp = array[j];
    array[j] = array[i];
    array[i] = temp;
}
