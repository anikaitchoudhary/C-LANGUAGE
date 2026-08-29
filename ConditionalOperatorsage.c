//Conditional Operators Or Ternary Operators
#include<stdio.h>
int main()
{
	int age;
	scanf("%d", &age);
	(age>=18)?printf("%d Is Eligible To Vote", age):printf("%d Is Not Eligible To Vote", age);
}
