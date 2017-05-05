make:
	gcc -o quicksort.Hoare.single_pivot HSingle.c
	gcc -o quicksort.Hoare.median_pivot HMedian.c
	gcc -o quicksort.Hoare.random_pivot	HRandom.c
	gcc -o quicksort.Lomuto.single_pivot LSingle.c
	gcc -o quicksort.Lomuto.median_pivot LMedian.c
	gcc -o quicksort.Lomuto.random_pivot LRandom.c

clean:
	rm -rf quicksort.*
