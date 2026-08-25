//Area Of Circle
#include<stdio.h>
#define Pi 3.14
int main()
{
	int r;
	float Area;
	printf("Enter Radius:\n");
	scanf("%i", &r);
	Area = Pi*r*r;
	printf("Area=%.2f", Area);
}
