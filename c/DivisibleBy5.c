#include<stdio.h>
#include<conio.h>

int main()
{
	int num;
	
	printf("\nEnter A Number : ");
	scanf("%d",&num);
	
	if(num%5==0)
	{
		printf("\nA Number is Divisible by 5");
	}
	else
	{
		printf("\nA Number Is Not divisible by 5");
	}
	return 0;
}
