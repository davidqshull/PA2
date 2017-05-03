/**
 * CSC 335 - Analysis of Algorithms
 * Programming Assignment 2
 * Jan-Lucas Fitzquadragesimus Ott, Anthony Fitzquadragesimus Pompili, David Quadragesimus Shull
 * May 5, 2017
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randomInt(int min, int max) {
    time_t t;
    srand((unsigned) time(&t));

    return (rand() % (max + 1 - min)) + min;
}
