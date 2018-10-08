#include<stdio.h>
#include<stdlib.h>

int main(void) {

	int a;

	printf("Input a number : ");
	scanf_s("%d", &a);

	if (a % 2 == 1)
		printf("%d is a odd number\n", a);
	else
		printf("%d is a even number\n", a);

	system("pause");
	return 0;
}