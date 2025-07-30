#include<stdio.h>
#include<conio.h>

int main()
{
	int age;
	char testResult;
	
	printf("\nEnter a Age : ");
	scanf("%d",&age);
	
	
	
	if(age>=18)
	{
		printf("\nHave you passed the driving test (Y/N) : ");
		scanf("%s",&testResult);
	
		if(testResult=='y')
		{
			printf("\nYou are eligible for a driving License");
		}
		else if(testResult=='n')
		{
			printf("\nYou are Not eligible for a driving License");
		}
		else
		{
			printf("\nInvalid Input");
		}
	}
	else
	{
		printf("\nYou are Not eligible for a driving License. \nAge must be at least 18.");
	}
	return 0;
}
