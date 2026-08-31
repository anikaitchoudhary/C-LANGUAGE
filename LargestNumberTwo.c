//Checking Of Largest Number Amoung Two Through Conditional Operations
#include<stdio.h>
int main()
{
	int N1, N2;
	printf("Enter Two Numbers:\n");
	scanf("%d%d", &N1, &N2);
	(N1>N2)?printf("%d Is The Largest Number", N1):printf("%d Is The Largest Number", N2);
}
