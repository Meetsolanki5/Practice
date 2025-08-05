#include<stdio.h>
#include<conio.h>

int main() 
{
    int secret=37;
    int guess;

    do {
        printf("\nGuess the number (between 1 to 100): ");
        scanf("%d",&guess);

        if(guess<secret)
		{ 
            printf("\nToo low! Try again.");
        }
		else if(guess>secret)
		{
            printf("\nToo high! Try again.");
        }
		else
		{
            printf("\nRight Guess");
        }

    }while(guess!=secret);

    return 0;
}
