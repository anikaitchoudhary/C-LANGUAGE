#include<stdio.h>
int lcm(int N1, int N2)
{
	return (N1*N2)/gcd(N1,N2);
}//END OF LCM
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
}//END OF GDC
main()
{
	int N1, N2;
	scanf("%d%d", &N1, &N2);
	printf("GCD = %d", gcd(N1,N2));
	printf("\nLCM = %d", lcm(N1,N2));
}