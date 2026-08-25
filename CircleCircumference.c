//Circumference Of Circle
#include<stdio.h>
#define Pi 3.14
int main()
{
	int r;
	float Circumference;
	printf("Enter Radius:\n");
	scanf("%i", &r);
	Circumference = 2*Pi*r;
	printf("Circumference=%.2f", Circumference);
}
