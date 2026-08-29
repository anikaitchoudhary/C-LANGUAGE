//Logical Operators 
#include<stdio.h>
int main()
{
	int x, y, z;
	scanf("%d%d%d", &x, &y, &z);
	printf("x=%d, y=%d, z=%d", x, y, z);
	printf("\nLogical or = %d", (x > y) || (x > z));
	printf("\nLogical and = %d", (x > y) && (x > z));
	printf("\nLogical not = %d", !((x > y) && (x > z)));
}
