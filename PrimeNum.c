#include<stdio.h>
main()
{
	int N, x, y, count;
	scanf("%d", &N);
	for(x=1;x<=N;x++)//Print Prime Numbers
	{
		count=0;
		for(y=1;y<=N;y++)//Divisors
		{
		if(x%y==0)
		count++;
		}
		if(count==2)
		printf("%d ", x);
	}
}