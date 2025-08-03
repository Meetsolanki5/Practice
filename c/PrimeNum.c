#include<stdio.h>
#include<conio.h>

int main()
{
	int num,i,isPrime =1;
	
	printf("\nEnter a Number : ");
	scanf("%d",&num);
	
	if(num<=1)
	{
		isPrime = 0;
	}
	else
	{
		for(i=2;i<num/2;i++)
		{
			if(num%i==0)
			{
				isPrime=0;
				break;
			}
		}
	}
	
	if(isPrime)
	{
		printf("\n%d is a Prime Number",num);
	}
	else
	{
		printf("\n%d is not a Prime Number",num);
	}
}
