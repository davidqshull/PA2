/**
 * CSC 335 - Analysis of Algorithms
 * Programming Assignment 2
 * Jan-Lucas Fitzquadragesimus Ott, Anthony Fitzquadragesimus Pompili, David Quadragesimus Shull
 * May 5, 2017
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * Read array from stdin. First line is number of elements, proceeding lines are
 * each element, one per line.
 * Returns array of elements, and sets the pointer to the number of elements.
 **/
int* read_array(int* size_p) {
    char *line = NULL;
    size_t sz;

    // get number of elements in array from first line
    int size;
    getline(&line, &sz, stdin);
    size = atoi(line);

    // initialize array to size, static so it is preserved
    int* array = (int*) malloc(sizeof(int) * size);

    // read lines til we have all elements
    int i;
    for (i = 0; i < size; i++) {
        getline(&line, &sz, stdin);
        array[i] = atoi(line);
    }

    // set size of array
    *size_p = size;
    // return array address
    return array;
}
