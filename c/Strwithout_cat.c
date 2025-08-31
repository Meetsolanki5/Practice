#include<stdio.h>
#include<conio.h>

int main()
{
	char a[50],b[50];
	int i=0,j=0;
	
	printf("\nEnter String A : ");
	gets(a);
	printf("\nEnter String B : ");
	gets(b);
	
	while(a[i]!='\0')
	{
		i++;
	}
	
	while(b[j]!='\0')
	{
		a[i]=b[j];
		i++;
		j++;
	}
	
	a[i]='\0';
	
	printf("\nConcatenated String : %s",a);
}
