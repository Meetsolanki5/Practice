#include<stdio.h>
#include<conio.h>

int main()
{
	char ch;
	
	printf("\nEnter A Character : ");
	scanf("%c",&ch);
	
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	{
		printf("\n %c is a Vowels",ch);
	}
	else
	{
		printf("\n %c is a not Vowels",ch);
	}
	return 0;
}
