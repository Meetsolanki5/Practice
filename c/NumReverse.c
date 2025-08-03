#include<stdio.h>
#include<conio.h>

int main()
{
	int num,reversedNum=0,digit;
	
	printf("\nEnter a Number : ");
	scanf("%d",&num);
	
	while(num!=0)
	{
		digit=num%10;
		reversedNum=reversedNum*10+digit;
		num=num/10;
	}
	
	printf("\nReversed Number is %d",reversedNum);
}
