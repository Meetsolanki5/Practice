#include<stdio.h>
#include<conio.h>

int main()
{
	int i,num;
	int sum =0;
	
	printf("\nEnter a Number : ");
	scanf("%d",&num);
	
	if(num<=0)
	{
		printf("\nEnter a Greater Number Then Zero");
	}
	else
	{
		for(i=1;i<=num;i++)
		{
			sum = sum +i;	
		}
		
		printf("\n sum of %d Netural Number = %d",num,sum);
	}
	return 0;
}
