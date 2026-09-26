#include<stdio.h>
int main()
{
	int x=1, n;
	scanf("%d",&n);
	while(x<=n)
	{
		if(x%2!=0)
			printf("%d",x);
		x++;
	}
}