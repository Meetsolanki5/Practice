#include<stdio.h>
#include<conio.h>

int add(int a,int b)
{
	return a+b;
}
int sub(int a,int b)
{
	return a-b;
}
int mul(int a,int b)
{
	return a*b;
}
int div(int a,int b)
{
	return a/b;
}
int mod(int a,int b)
{
	return a%b;
}

void star()
{
	int i;
	for(i=0;i<40;i++)
	{
		printf("-*");
	}
}

void main()
{
	int x,y;
	clrscr();
	printf("\nEnter value : ");
	scanf("%d",&x);
	printf("\nEnter value : ");
	scanf("%d",&y);
	printf("\nAddition : %d\n",add(x,y));
	star();
	printf("\nSubtraction : %d\n",sub(x,y));
	star();
	printf("\nmultiplication : %d\n",mul(x,y));
	star();
	printf("\ndivision : %d\n",div(x,y));
	star();
	printf("\nmoduls : %d\n",mod(x,y));
	getch();
}
