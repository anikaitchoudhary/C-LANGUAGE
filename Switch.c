#include<stdio.h>
main()
{
	char ch;
	scanf("%c",&ch);
	switch(ch)
	{
		case 'R':
		case 'r':
		printf("Stop");
		break;
		case 'G':
		case 'g':
		printf("Go");
		break;
		case 'O':
		case 'o':
		printf("Be Ready");
		break;
		default:printf("Invalid Choice");
			}//End Of Switch Statement
}//End Of Main Junction