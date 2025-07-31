#include<stdio.h>
#include<conio.h>

int main()
{
	char ch;
	printf("\nEnter A Character : ");
	scanf("%c",&ch);
	
	if (ch >= 'A' && ch <= 'Z')
	{
        ch = ch + 32;
    }
    
	switch(ch)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			printf("\n%c is a Vowels",ch);
			break;
		
		default:
			if(ch>='a' && ch<='z')
			{
				printf("\n%c is a Consonant.\n",ch);
			}
			else
			{
				printf("\n%c is Not a Character.\n",ch);
			}
	}
	return 0;
}
