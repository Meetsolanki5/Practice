#include<stdio.h>
#include<conio.h>

int main()
{
	int num;
	
	printf("\nEnter the Number : ");
	scanf("%d",&num);
	
	if(num>0)
	{
		printf("\nNumber Is Positive");
	}
	else
	{
		printf("\nNumber Is Negative");
	}
	return 0;
}
