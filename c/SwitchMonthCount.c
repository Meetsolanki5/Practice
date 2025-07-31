#include<stdio.h>
#include<conio.h>

int main()
{
	int month,year;

	printf("\nEnter a Month : ");
	scanf(" %d",&month);

	switch(month)
	{
		case 1:
			printf("\nJanuary");
			break;
			
		case 2:
			printf("\nEnter a year : ");
			scanf(" %d",&year);
			
			if((year%4==0 && year%100 !=0)||(year%400==0))
			{
				printf("\nFebruary is Leap Year");
			}
			else
			{
				printf("\nFebruary is not a Leap Year");
			}
			break;
		
		case 3:
			printf("\nMarch");
			break;
			
		case 4:
			printf("\nApril");
			break;

		case 5:
			printf("\nMay");
			break;

		case 6:
			printf("\nJune");
			break;

		case 7:
			printf("\nJuly");
			break;
		
		case 8:
			printf("\nAugust");
			break;
		
		case 9:
			printf("\nSeptember");
			break;
		
		case 10:
			printf("\nOctober");
			break;
		
		case 11:
			printf("\nNovember");
			break;
		
		case 12:
			printf("\nDecember");
			break;

		default:
			printf("\nInvalid Month");
	}

	return 0;
}
