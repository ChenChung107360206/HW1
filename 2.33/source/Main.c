#include<stdio.h>
#include<stdlib.h>

int main(void) {

	float Tmile, costPG, MPgallon, Pfees, Tolls, Tcost;

	printf("Input Total miles driven per day : ");
	scanf_s("%f", &Tmile);
	printf("Input Cost per gallon of gasoline : ");
	scanf_s("%f", &costPG);
	printf("Input Average miles per gallon : ");
	scanf_s("%f", &MPgallon);
	printf("Input Parking fees per day : ");
	scanf_s("%f", &Pfees);
	printf("Input Tolls per day : ");
	scanf_s("%f", &Tolls);

	Tcost = Pfees + Tolls + (Tmile / MPgallon)*costPG;
	printf("%.2f\n", Tcost);

	system("pause");
	return 0;
}