#include<stdio.h>
#include<conio.h>

int main()
{
	int a,b,result;
	char op;

	printf("\nEnter A : ");
	scanf("%d",&a);

	printf("\nEnter B : ");
	scanf("%d",&b);

	printf("\nEnter An Operator (+, -, *, /) : ");
	scanf(" %c",&op);

	switch(op)
	{
		case '+':
			result = a + b;
			printf("\nResult : %d",result);
			break;

		case '-':
			result = a - b;
			printf("\nResult : %d",result);
			break;

		case '*':
			result = a * b;
			printf("\nResult : %d",result);
			break;

		case '/':
			if(b != 0)
			{
				result = a / b;
				printf("\nResult : %d",result);
			}
			else
			{
				printf("\nZero is not Allowed");
			}
			break;

		default:
			printf("\nInvalid operator");
	}

	return 0;
}
