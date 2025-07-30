#include<stdio.h>
#include<conio.h>

int main()
{
	int a,b,c;
	
	printf("\nEnter Integer A : ");
	scanf("%d",&a);
	printf("\nEnter Integer B : ");
	scanf("%d",&b);
	printf("\nEnter Integer C : ");
	scanf("%d",&c);
	
	printf("\nA : %d",a);
	printf("\nB : %d",b);
	printf("\nC : %d\n",c);
	
	if(a>b && a>c)
	{
		printf("\nA is Max");
	}
	else if(b>c && b>a)
	{
		printf("\nB is Max");
	}
	else
	{
		printf("\nC is Max");
	}
	return 0;
}
