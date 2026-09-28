#include<stdio.h>
main()
{
	int N, x, y;
	scanf("%d", &N);
	for(x=1;x<=N;x++)
	{
		for(y=1;y<=N;y++)
		{
			printf("*");
		}
		printf("\n");
	}
}