#include<stdio.h>
main()
{
	int sum=0,rem,N,temp;
	scanf("%d",&N);
	temp=N;
	while(N!=0)
	{
		rem=N%10;
		sum=sum+(rem*rem*rem);
		N=N/10;
	}
	if(sum==temp)
	printf("%d is an Amstrong Number",temp);
	else
	printf("%d is not an Amstrong Number",temp);
}