#include<stdio.h>
#include<stdlib.h>

int main(void) {

	for (int i = 0; i < 9; i++) {
		printf("*");
		for (int j = 1; j < 8; j++) {
			if (i == 0 || i == 8)
				printf("*");
			else
				printf(" ");
		}
		printf("*\n");
	}

	printf("\n");
	for (int i = 0, a = 1; i < 9; i++) {
		for(int j = 0; j < 9; j++){
			if (i == 0 || i == 8) {
				if (j >= 3 && j <= 5)
					printf("*");
				else
					printf(" ");
			}
			if (i == 1 || i == 7) {
				if (j == 1 || j == 7)
					printf("*");
				else
					printf(" ");
			}
			if (i >= 2 && i <= 6) {
				if (j == 0 || j == 8)
					printf("*");
				else
					printf(" ");
			}
		}
		printf("\n");
	}

	printf("\n");
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (i == 0 || i >=3) {
				if (j == 4)
					printf("*");
				else
					printf(" ");
			}
			if (i == 1) {
				if (j >= 3 && j <= 5)
					printf("*");
				else
					printf(" ");
			}
			if (i == 2) {
				if (j >= 2 && j <= 6)
					printf("*");
				else
					printf(" ");
			}
		}
		printf("\n");
	}

	printf("\n");
	int a = 4, b = 4;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
				if (j == a || j == b)
					printf("*");
				else
					printf(" ");
		}
		if (i < 4) {
			a+=1; b-=1;
		}
		else {
			a-=1; b+=1;
		}
		printf("\n");
	}

	system("pause");
	return 0;
}