void incrementHeapVariable() {
	printf("task3 \n");
	int *p = (int *)malloc(sizeof(int));
	printf("p = ");
	scanf("%d", p);
	printf("%p  %d \n", p, *p);
	increment(p);
	printf("%p  %d \n", p, *p);
	free(p);
}