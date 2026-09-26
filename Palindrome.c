#include<stdio.h>
main()
{
	int N, rem, rev=0, temp;
	scanf("%d", &N);
	temp=N;
	while(N!=0)
	{
		rem=N%10;
		rev=(rev*10)+rem;
		N=N/10;
	}
	if(temp==rev)
	printf("%d Is Palindrome", temp);
	else
	printf("%d Is Not Palindrome", temp);
}