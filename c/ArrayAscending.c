#include<stdio.h>
#include<conio.h>

int main()
{
	int a[5],i,j,temp;
	
	for(i=0;i<5;i++)
	{
		printf("\nEnter A[%d] Number : ",i+1);
		scanf("%d",&a[i]);
	}
	
	printf("\nArray Element Are");
	for(i=0;i<5;i++)
	{
		printf("\nA[%d] : %d",i+1,a[i]);
	}
	printf("\n");
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<i;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\nAscending Order In Array: ");
	for(i=0;i<5;i++)
	{
		printf("\nA[%d] : %d",i+1,a[i]);
	}
	return 0;
}
