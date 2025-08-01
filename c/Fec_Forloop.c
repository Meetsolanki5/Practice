#include<stdio.h>
#include<conio.h>

int main()
{
	int num,i;
	int factorial = 1;
	
	printf("\nEnter a Number : ");
	scanf("%d",&num);
	
	if(num<0)
	{
		printf("\nNegative number is not Allowed In Factorial");
	}
	else
	{
		for(i=1;i<=num;i++)
		{
			factorial = factorial*i;
		}
		
		printf("\nFactorial of %d = %d",num,factorial);
	}
	return 0;
}
