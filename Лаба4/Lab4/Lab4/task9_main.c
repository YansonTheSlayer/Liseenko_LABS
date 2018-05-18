#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Header.h"


int main() {

	int n;
	for (int i = 0; i != -1;) {
		system("cls");
		printf("1 to task 2 \n");
		printf("2 to task 3 \n");
		printf("3 to task 7 \n");
		printf("4 to task 8 \n");
		printf("5 to Exit \n \n");
		printf("Choose Your");

		switch (_getch()) {
		case '1':
			system("cls");
			printf("task 2 \n");
			incrementStackVariable();
			_getch();
			break;
		case '2':
			system("cls");
			printf("task 3 \n");
			incrementHeapVariable();
			_getch();
			break;
		case '3':
			system("cls");
			printf("task 7 \n");
			sortStackArray();
			_getch();
			break;
		case '4':
			system("cls");
			printf("task 8 \n");
			sortHeapArray();
			_getch();
			break;
		case '5':
			system("cls");
			printf("Exit");
			i = -1;
			break;

		default:
			break;
		}

	}

	_getch();
	return 0;
}