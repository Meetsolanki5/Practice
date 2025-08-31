#include<stdio.h>
#include<conio.h>

int main()
{
	int n,i,arr[100];
	int min,max;
	
	printf("\nEnter Number Of N : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\nEnter %d Number : ",i+1);
		scanf("%d",&arr[i]);
	}
	
	max=min=arr[0];
	
	for(i=1;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	
	printf("\nMaximum : %d",max);
	printf("\nMinimun : %d",min);
	
	return 0;
	
}
