void increment(int *n) {
	printf("task1 \n");
	if ((*n) != 0) {
		printf("%p  %d \n", n, *n);
		(*n)++;
		printf("%p  %d \n", n, *n);
	}

}