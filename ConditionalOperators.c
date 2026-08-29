//Conditional Operators Or Ternary Operators
#include<stdio.h>
int main()
{
	int number;
	scanf("%d", &number);
	(number%2==0)?printf("%d Is Even", number):printf("%d Is Odd", number);
}
