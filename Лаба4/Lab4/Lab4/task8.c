void sortHeapArray() {
	int n, l, r;
	printf("n = ");
	scanf("%d", &n);
	l = 0; r = n - 1;
	int *arr = (int *)malloc(sizeof(int)*n);
	readArray(arr, n);
	printf("n = %d \n", n);
	writeArray(arr, n);
	printf("Sortirovka: \n");
	sort(arr, l, r);
	writeArray(arr, n);
}