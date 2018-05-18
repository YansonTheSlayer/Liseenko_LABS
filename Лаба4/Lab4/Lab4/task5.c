#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void readArray(int *arr, int n) {
	for (int i = 0; i < n; ++i) {
		printf("arr[%d] = ", i + 1);
		scanf("%d", &arr[i]);
	}
}