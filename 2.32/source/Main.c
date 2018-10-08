#include<stdio.h>
#include<stdlib.h>

int main(void) {

	float BMI, height, weight;

	printf("Input your height(meter) and weight(kilogram) : ");
	scanf_s("%f %f", &height, &weight);

	BMI = weight / (height*height);
	printf("Your BMI is %f\n", BMI);
	if (BMI < 18.5)
		printf("Underweight\n");
	if (BMI >= 18.5 && BMI < 25)
		printf("Normal\n");
	if (BMI >= 25 && BMI < 30)
		printf("Overweight\n");
	if (BMI >= 30)
		printf("Obese\n");

	system("pause");
	return 0;
}