#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char *password;
	
	while(1)
	{
		printf("\nEnter Password : ");
		gets(password);
		
		if(strcmp(password,"admin123")==0)
		{
			printf("\nAccess Granted");
			break;
		}
		else
		{
			printf("\nIncorrect Password");
		}
	}
	return 0;
}
