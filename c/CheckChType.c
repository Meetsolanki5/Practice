#include<stdio.h>
#include<conio.h>

int main()
{
	char ch;
	printf("\nEnter Any Character : ");
	scanf("%c",&ch);
	
	if(ch>='A' && ch<='Z')
	{
		printf("\n%c is an Uppercase Letter",ch);
	}
	else if(ch>='a' && ch<='z')
	{
		printf("\n%c is a lowercase letter",ch);
	}
	else if(ch>='0' && ch<='9')
	{
		printf("\n%c is a Digit",ch);
	}
	else
	{
		printf("\n%c is a Special Character",ch);
	}
	return 0;
}
