#include <stdio.h>
int sum(int x)
{
	int sum=0, i;
	for(i=1;i<=x;i++)
	{
		sum=sum+i;
	}
		return sum;	
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
int main()
{
	int N1, N2;
	scanf("%d%d", &N1, &N2);
	printf("GCD = %d", gcd(N1,N2));
	printf("\nSum = %d",sum(gcd(N1,N2)));
	return 0;
}