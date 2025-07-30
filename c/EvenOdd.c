#include<stdio.h>
#include<conio.h>

int main()
{
	int num;
	
	printf("\nEnter A Number : ");
	scanf("%d",&num);
	
	if(num%2==0)
	{
		printf("\nNumber is Even");
	}
	else
	{
		printf("\nNumber is Odd");
	}
	return 0;
}
