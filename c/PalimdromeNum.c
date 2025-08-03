#include<stdio.h>
#include<conio.h>

int main()
{
	int num,originalNum,reversedNum=0,digit;
	
	printf("\nEnter a Number : ");
	scanf("%d",&num);
	
	originalNum=num;
	
	while(num!=0)
	{
		digit=num%10;
		reversedNum=reversedNum*10+digit;
		num=num/10;
	}
	
	if(originalNum == reversedNum)
	{
		printf("\n%d is a Palimdrome",originalNum);
	}
	else
	{
		printf("\n%d is not a Palimdrome",originalNum);
	}
	return 0;
}
