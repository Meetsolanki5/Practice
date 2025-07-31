#include<stdio.h>
#include<conio.h>

int main()
{
	int digit;

	printf("\nEnter a digit(0 to 9) : ");
	scanf(" %d",&digit);

	switch(digit)
	{
		case 0:
			printf("\nZero");
			break;
			
		case 1:
			printf("\nOne");
			break;
			
		case 2:
			printf("\nTwo");
			break;
		
		case 3:
			printf("\nThree");
			break;
			
		case 4:
			printf("\nFour");
			break;

		case 5:
			printf("\nFive");
			break;

		case 6:
			printf("\nSix");
			break;

		case 7:
			printf("\nSeven");
			break;
		
		case 8:
			printf("\nEight");
			break;
		
		case 9:
			printf("\nNine");
			break;

		default:
			printf("\nInvalid digit");
	}

	return 0;
}
