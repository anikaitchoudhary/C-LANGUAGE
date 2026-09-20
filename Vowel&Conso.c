#include<stdio.h>
main()
{
	char ch;
	scanf("%c",&ch);
	switch(ch)
	{
		case 'A':
		case 'a':
		case 'E':
		case 'e':
		case 'I':
		case 'i':
		case 'O':
		case 'o':
		case 'U':
		case 'u':
		printf("Is A Vowel");
		break;
		default:printf("It Is A Consonant");
	}
}