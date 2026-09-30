#include<stdio.h>
main()
{
	int N, x, y;
	scanf("%d%d", &N, &y);
	for(x=1;x<=y;x++)
	{
		printf("\n%d*%d=%d", N, x, N*x);
	}
}