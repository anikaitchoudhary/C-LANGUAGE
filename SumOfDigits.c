#include<stdio.h>
main()
{
	int sum=0,rem,N;
	scanf("%d",&N);
	while(N!=0)
	{
		rem=N%10;
		sum=sum+rem;
		N=N/10;
	}
	printf("%d",sum);
}