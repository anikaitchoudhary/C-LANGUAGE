#include<stdio.h>
main()
{
	int N, x, y;
	scanf("%d", &N);
	for(x=1;x<=N;x++)
	{
		for(y=1;y<=x;y++)
		{
			printf("%d", y);//Every Row With Different Data
		}
		printf("\n");
	}
}