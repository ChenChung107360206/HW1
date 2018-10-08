#include<stdio.h>
#include<stdlib.h>

int main(void) {

	printf("nmber\tsquare\tcube\n");

	for (int i = 1; i < 11; i++) {
		printf("%d\t%d\t%d\n", i, i*i, i*i*i);
	}

	system("pause");
	return 0;
}