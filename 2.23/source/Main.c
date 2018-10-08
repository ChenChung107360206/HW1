#include<stdio.h>
#include<stdlib.h>

int main(void) {

	int a[3], b = 999, c = -999;

	printf("Input three intergers :");
	scanf_s("%d %d %d", &a[0], &a[1], &a[2]);

	for (int i = 0; i < 3; i++) {
		if (a[i] >= c)
			c = a[i];
		if (a[i] <= b)
			b = a[i];
	}
	printf("The largest interger is : %d\n", c);
	printf("The smallest interger is : %d\n", b);

	system("pause");
	return 0;
}