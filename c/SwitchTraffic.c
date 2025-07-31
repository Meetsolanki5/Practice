#include<stdio.h>
#include<conio.h>

int main() 
{
    char color;

    printf("\nEnter traffic light color (R/r, G/g, Y/y): ");
    scanf(" %c", &color);

    switch(color) 
	{
        case 'R':
        case 'r':
            printf("\nSTOP");
            break;

        case 'G':
        case 'g':
            printf("\nGO");
            break;

        case 'Y':
        case 'y':
            printf("\nWAIT");
            break;

        default:
            printf("Invalid color input");
    }

    return 0;
}
