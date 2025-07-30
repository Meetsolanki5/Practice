#include<stdio.h>
#include<conio.h>

int main()
{
	int age;
	
	printf("\nEnter The Age : ");
	scanf("%d",&age);
	
	if(age>=18)
	{
		printf("\nA Person Is Eligible To Vote");
	}
	else
	{
		printf("\nA Person Is Not Eligible To Vote");
	}
	return 0;
}
