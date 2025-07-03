#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,k;
	clrscr();
	for(i=75;i>=65;i--)
	{
		for(k=1;k<9-1;k++)
		{
			printf(" ");
		}
		for(j=65;j<=i;j++)
		{
			printf(" %c",j);
		}
		printf("\n");
	}
	getch();
}
