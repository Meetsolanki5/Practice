#include<stdio.h>
#include<conio.h>

int main()
{
	int num,i,sum=0;
	
	printf("\nEnter a Number : ");
	scanf("%d",&num);
	
	for(i=1;i<num;i++)
	{
		if(num%i==0)
		{
			sum +=i;
		}
	}
	if(sum==num)
	{
		printf("\n%d is a Perfect Number",num);
	}
	else
	{
		printf("\n%d is Not a Perfect Number",num);
	}
	return 0;
}
