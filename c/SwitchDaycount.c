#include<stdio.h>
#include<conio.h>

int main()
{
	int day;

	printf("\nEnter a Day : ");
	scanf(" %d",&day);

	switch(day)
	{
		case 1:
			printf("\nMonday");
			break;
			
		case 2:
			printf("\ntuesday");
			break;
		
		case 3:
			printf("\nWednesday");
			break;
			
		case 4:
			printf("\nthursday");
			break;

		case 5:
			printf("\nFriday");
			break;

		case 6:
			printf("\nSaturday");
			break;

		case 7:
			printf("\nSunday");
			break;

		default:
			printf("\nInvalid Day");
	}

	return 0;
}
