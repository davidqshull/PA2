#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void) {
    FILE *f = fopen("Lomuto.random_pivot.vs.median_pivot.inp", "w");

    time_t t;
    srand((unsigned) time(&t));

    fprintf(f, "10000\n");
    for(int i = 0; i < 10000; i++) {
        fprintf(f, "%d\n", (rand() % 10000));
    }

    printf("\n1. LSP vs HSP doesn't exist\n");

    printf("\n2. HSP vs LSP: \n");

    system("time ./quicksort.Hoare.single_pivot < Hoare.single_pivot.vs.Lomuto.inp");
    system("time ./quicksort.Lomuto.single_pivot < Hoare.single_pivot.vs.Lomuto.inp");

    printf("\n3. LSP vs LMP doesn't exist \n");

    printf("\n4. LMP vs LSP\n");

    system("time ./quicksort.Lomuto.median_pivot < Lomuto.median_pivot.vs.single_pivot.inp");
    system("time ./quicksort.Lomuto.single_pivot < Lomuto.median_pivot.vs.single_pivot.inp");

    printf("\n5. LMP vs LRP\n");

    system("time ./quicksort.Lomuto.median_pivot < Lomuto.median_pivot.vs.random_pivot.inp");
    system("time ./quicksort.Lomuto.random_pivot < Lomuto.median_pivot.vs.random_pivot.inp");

    printf("\n6. LRP vs LMP: \n");

    system("time ./quicksort.Lomuto.random_pivot < Lomuto.random_pivot.vs.median_pivot.inp");
    system("time ./quicksort.Lomuto.median_pivot < Lomuto.random_pivot.vs.median_pivot.inp");

    // system("./quicksort.Lomuto.median_pivot");
    // system("./quicksort.Lomuto.random_pivot");
    // system("./quicksort.Lomuto.single_pivot");
    // system("./quicksort.Hoare.median_pivot");
    // system("./quicksort.Hoare.random_pivot");
    // system("./quicksort.Hoare.single_pivot");
}
