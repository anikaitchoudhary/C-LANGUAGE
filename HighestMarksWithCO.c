//Finding Total Marks And Highest Marks Through Conditional Operations
#include<stdio.h>
int main()
{
	int M1, M2, M3;
	int TotalOne, TotalTwo;
	printf("Enter First Student Marks:\n");
	scanf("%d%d%d", &M1, &M2, &M3);
	TotalOne = M1 + M2 + M3;
	printf("Enter Second Student Marks:\n");
	scanf("%d%d%d", &M1, &M2, &M3);
	TotalTwo = M1 + M2 + M3;
	(TotalOne>TotalTwo)?printf("%d Is The Highest Marks Scored By Student One", TotalOne):printf("%d Is The Highest Marks Scored By Student Two", TotalTwo);
}
