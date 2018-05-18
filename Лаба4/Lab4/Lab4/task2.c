void incrementStackVariable() {
	printf("task2 \n");
	int x;
	printf("x = ");
	scanf("%d", &x);
	printf("%p  %d \n", &x, x);
	increment(&x);
	printf("%p  %d \n", &x, x);

}