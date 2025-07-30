#include<stdio.h>
#include<conio.h>

int main()
{
	int num;
	printf("\nEnter a Number : ");
	scanf("%d",&num);
	
	if(num>=0)
	{
		if(num==0)
		{
			printf("\nNumber is Zero");
		}
		else
		{
			printf("\nNumber is Positive");
		}
	}
	else
	{
		printf("\nNumber is Negative");
	}
	return 0;
}
