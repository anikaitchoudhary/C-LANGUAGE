//Reading Age And Checking Either It's Divisble By 3 And To Check The Oldest
#include<stdio.h>
int main()
{
	int AgeOne, AgeTwo;
	printf("Enter Age Of First Person\n");
	scanf("%d", &AgeOne);
	(AgeOne%3==0);
	printf("Enter Age Of Second Person\n");
	scanf("%d", &AgeTwo);
	(AgeTwo%3==0);
	(AgeOne>AgeTwo)?printf("%d Is The Age Of First Person Who Is The Oldest", AgeOne):printf("%d Is The Age Of Second Person Who Is The Oldest", AgeTwo);
}
