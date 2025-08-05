#include<stdio.h>
#include<conio.h>

int factorial(int n)
{
	int fact=1,i;
	
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	return fact;
}

int main()
{
	int num;
	
	printf("\nEnter a Number : ");
	scanf("%d",&num);	
	
	if(num<0)
	{
		printf("\nFactorial Not Defined For Negative Numbers");
	}
	else
	{
		printf("\nFactorial of %d is %d",num,factorial(num));
	}
	return 0;
}
