#include<stdio.h>
#include<stdlib.h>

int main(void) {

	int a, b;

	printf("Input two intergers : ");
	scanf_s("%d %d", &a, &b);

	if (a%b == 0)
		printf("The first number is the multiple of the second number\n");
	else
		printf("The first number is not the multiple of the second number\n");

	system("pause");
	return 0;
}