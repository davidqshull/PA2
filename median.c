/**
 * CSC 335 - Analysis of Algorithms
 * Programming Assignment 2
 * Jan-Lucas Fitzquadragesimus Ott, Anthony Fitzquadragesimus Pompili, David Quadragesimus Shull
 * May 5, 2017
*/

#include <stdio.h>

int median(int low, int high, int* array) {
    int first = array[low];
    int middle = array[(low+high)/2];
    int last = array[high];

    if((first + last) >= (middle + last)) {
        if(middle >= last)
            return high;
        return (low+high)/2;
    }
    if(first >= last)
        return low;
    return (low+high)/2;
}
