#include<stdio.h>
#include<conio.h>

int main()
{
	int num,count=0;
	
	printf("\nEnter a Number : ");
	scanf("%d",&num);
	
	if(num==0)
	{
		count=0;
	}
	else
	{
		while(num!=0)
		{
			num=num/10;
			count++;
		}
		
		printf("\nTotal Number Of Digit : %d",count);
	}
}
