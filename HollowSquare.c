#include<stdio.h>
main()
{
	int N, x, y;
	scanf("%d", &N);
	for(x=0;x<=N;x++)
	{
		for(y=0;y<=N;y++)
		{
			if(x==0||x==N||y==0||y==N)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
}