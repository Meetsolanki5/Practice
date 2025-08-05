#include<stdio.h>
#include<conio.h>

int main()
{
	int a,b,result;
	int choice;
	
	do
	{
		printf("\n********** Calculator Manu **********");
		printf("\n1. Add");
		printf("\n2. Subtract");
		printf("\n3. Multiply");
		printf("\n4. Divide");
		printf("\n5. Exit");
		
		printf("\nEnter Your Choice : ");
		scanf("%d",&choice);
		
		if(choice>=1 && choice<=4)
		{
			printf("\nEnter Two Number : ");
			scanf("%d%d",&a,&b);	
		}
		
		switch(choice)
		{
			case 1:
				result=a+b;
				printf("\nResult : %d",result);
				break;
			
			case 2:
				result=a-b;
				printf("\nResult : %d",result);
				break;
			
			case 3:
				result=a*b;
				printf("\nResult : %d",result);
				break;
			
			case 4:
				result=a/b;
				printf("\nResult : %d",result);
				break;
				
			case 5:
				printf("\nExit");
				break;
			
			default:
				printf("\nInvalid Choice");
		}
		
	}while(choice!=5);
	
	return 0;
}
