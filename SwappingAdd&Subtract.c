//Swapping Of Numbers Using Arthematic Operations(Addition And Subtraction)
#include<stdio.h>
int main()
{
	int X1, X2, Temp;
	printf("Enter Two Numbers\n");
	scanf("%d%d", X1, X2);
	printf("\nBefore Swap X1=%d, X2=%d", X1, X2);
	X1 = X1 + X2;
	X2 = X1 - X2;
	X1 = X1 - X2;
	printf("\nAfter Swap X1=%d, X2=%d", X1, X2);
}
