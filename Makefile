make:
	gcc -o quicksort.Hoare.single_pivot HLP.c
	gcc -o quicksort.Hoare.median_pivot HMP.c
	gcc -o quicksort.Hoare.random_pivot	HRP.c
	gcc -o quicksort.Lomuto.single_pivot
	gcc -o quicksort.Lomuto.median_pivot
	gcc -o quicksort.Lomuto.random_pivot

clean:
	rm -rf quicksort.*
