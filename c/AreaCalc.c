#include<stdio.h>
#include<conio.h>

int main()
{
	int choice;
	float PI=3.14;
	float radius,length,breadth,base,height,area;
	
	printf("\n1. Area Of Circle\n");
	printf("\n2. Area Of Rectangle\n");
	printf("\n3. Area Of Triangle\n");
	printf("\n Exit\n");
	
	printf("\nEnter A Choice : ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			printf("Enter radius of the circle : ");
            scanf("%f",&radius);
            area = PI * radius * radius;
            printf("Area of Circle = %.2f\n",area);
            break;
        
        case 2:
            printf("Enter length and breadth of the rectangle: ");
            scanf("%f %f", &length, &breadth);
            area = length * breadth;
            printf("Area of Rectangle = %.2f\n", area);
            break;

        case 3:
            printf("Enter base and height of the triangle: ");
            scanf("%f %f", &base, &height);
            area = 0.5 * base * height;
            printf("Area of Triangle = %.2f\n", area);
            break;

        case 4:
            printf("Exit\n");
            break;

        default:
            printf("Invalid choice. Please enter 1 to 4.\n");
	}
}
