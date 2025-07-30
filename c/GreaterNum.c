#include<stdio.h>
#include<conio.h>

int main()
{
	int a,b;
	
	printf("\nEnter Integer A : ");
	scanf("%d",&a);
	printf("\nEnter Integer B : ");
	scanf("%d",&b);
	
	printf("\nA : %d",a);
	printf("\nB : %d",b);
	
	if(a>b)
	{
		printf("\nA is Greater Than B");
	}
	else
	{
		printf("\nB is Greater Than A");
	}
	return 0;
}
