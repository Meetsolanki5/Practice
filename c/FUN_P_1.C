#include<stdio.h>
#include<conio.h>

void stud(int sid)
{
	 printf("\nID is : %d",sid);
}

void main()
{
	int id;
	clrscr();
	printf("\nEnter student id:");
	scanf("%d",&id);
	stud(id);
	getch();
}