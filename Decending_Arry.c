//Short The Matrix in Decending order
#include<stdio.h>
#include<conio.h>
int main()
{
	int arry[100];
	int i,j,n,temp;
	//Inputing the size of array
	printf("Enter the size of array : ");
	scanf("%d",&n);
	//Inputing Elements of Array
	printf("\nEnter Elements : \n");
	for(i=0;i<n;i++)
	{
		printf("No.[%d] : ",i+1);
		scanf("%d",&arry[i]);	
	}
	//Printing The Array
	printf("The Given Array  is : ");
	for(i=0;i<n;i++)
	{
		printf(" %d\t",arry[i]);
	}
	//Shorting in Decending Order
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arry[i]<arry[j])
			{
				temp=arry[i];
				arry[i]=arry[j];
				arry[j]=temp;
			}
		}
	}
	//Printing After Shorting
	printf("\nArray After Shorting in Decending Order is : ");
	for(i=0;i<n;i++)
	{
		printf(" %d\t",arry[i]);
	}
	getch();
}
