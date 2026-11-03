#include<stdio.h>
int factorial(int N1)
{
	int fact=1, i;
	for(i=1;i<=N1;i++)
	fact=fact*i;
	return fact;
}
int gcd(int N1, int N2)
{
	int temp;
	while(N2!=0)
	{
		temp=N2;
		N2=N1%N2;
		N1=temp;
	}
	return N1;
}
main()
{
	int N1, N2, x;
	scanf("%d%d", &N1, &N2);
	printf("GCD = %d", gcd(N1,N2));
	x=gcd(N1,N2);
	printf("\nFactorial = %d",factorial(x));
}