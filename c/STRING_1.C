#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char *s1,*s2;
	int x;
	clrscr();
	printf("\nEnter String S1 :");
	gets(s1);
	strcpy(s2,s1);
	printf("\nAfter copy String s2 : %s",s2);
	x=strcmp(s1,s2);
	if(x==0)
	{
		printf("\nBoth Are Same");
	}
	else
	{
		printf("\nBoth Are not Same");
	}
	strrev(s2);
	printf("\nAfter Reverse String S2 : %s",s2);
	getch();
}