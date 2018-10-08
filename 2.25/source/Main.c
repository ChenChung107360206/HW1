#include<stdio.h>
#include<stdlib.h>

int main(void) {

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 9; j++) {
			if (i == 0)
				printf("P");
			if (i >= 1 && i <= 3) {
				if (j == 4 || j == 8)
					printf("P");
				else
					printf(" ");
			}
			if (i == 4) {
				printf("     P P ");
				break;
			}
		}
		printf("\n");
	}

	printf("\n");
	printf("  JJ     \n J       \nJ        \n J       \n  JJJJJJJ\n");
	printf("\n");
	printf("DDDDDDDDD\nD       D\nD       D\n D     D \n  DDDDD  ");

	system("pause");
	return 0;
}