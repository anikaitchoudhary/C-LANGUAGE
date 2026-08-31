//Checking Of Largest Number Amoung Three Through Conditional Operations
#include<stdio.h>
int main()
{
	int N1, N2, N3;
	printf("Enter Three Numbers:\n");
	scanf("%d%d", &N1, &N2, &N3);
	(N1>N2&&N1>N3)?printf("%d Is The Largest Number", N1):(N2>N3)?printf("%d Is The Largest Number", N2):printf("%d Is The Largest Number", N3);
}
