/**
 * CSC 335 - Analysis of Algorithms
 * Programming Assignment 2
 * Jan-Lucas Fitzquadragesimus Ott, Anthony Fitzquadragesimus Pompili, David Quadragesimus Shull
 * May 5, 2017
*/

void check(int* array, int size) {
    int i = 0;
    for(int j=1; j < size; j++) {
        if(array[i] > array[j]) {
            printf("Incorrect\n");
            return;
        }
        i++;
    }
    //printf("Correct\n\n");
}
