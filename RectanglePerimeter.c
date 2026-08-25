//Perimeter Of Rectangel 
#include<stdio.h>
int main()
{
	int L, B;
	float Perimeter;
	printf("Enter Length And Width\n");
	scanf("%i%i", &L, &B);
	Perimeter = 2*L+B;
	printf("Perimeter=%.1f", Perimeter);
}
