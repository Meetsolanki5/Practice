#include<stdio.h>
#include<conio.h>

int main()
{
	char name[50];
	int rno;
	int marks;
	
	printf("\nEnter Student Name : ");
	scanf("%s",&name);
	printf("\nEnter Student Roll No : ");
	scanf("%d",&rno);
	printf("\nEnter Student Marks : ");
	scanf("%d",&marks);
	
	printf("\nStudent Name : %s",name);
	printf("\nStudent Roll No : %d",rno);
	printf("\nStudent Marks : %d",marks);
	
	if(marks>=90 && marks<=100)
	{
		printf("\nGRADE A");
	}
	else if(marks>=75 && marks<90)
	{
		printf("\nGRADE B");
	}
	else if(marks>=60 && marks<75)
	{
		printf("\nGRADE C");
	}
	else if(marks>=40 && marks<60)
	{
		printf("\nGRADE D");
	}
	else
	{
		printf("\nFAIL");
	}
	return 0;
}
