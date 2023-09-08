//Subtraction of Matrix
#include<stdio.h>
#include<conio.h>
int main()
{
	int sub[10][10],first[10][10],secoand[10][10];
	int i,j,m,n,p,q;
	//Inputing order of Matrix
	printf("Enter the Order of first Matrix : ");
	scanf("%d%d",&m,&n);
	printf("Enter the Order of Secoand Matrix : ");
	scanf("%d%d",&p,&q);
	//Inputing Values of Matrix
	printf("\nEnter The Values of First Matrix : \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\nEnter Elements : ");
			scanf("%d",&first[i][j]);
		}
	}
	printf("\nEnter The Values of secoand Matrix : \n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			printf("\nEnter Elements :");
			scanf("%d",&secoand[i][j]);
		}
	}
	//Printing Values of Both Matrix
	printf("\nFirst Matrix : \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",first[i][j]);
		}
		printf("\n");
	}
	printf("\nSecoand Matrix : \n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			printf("%d\t",secoand[i][j]);
		}
		printf("\n");
	}
	//Subtracting Matrix
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			sub[i][j]=first[i][j]-secoand[i][j];
		}
	}
	//Printing The Result
	printf("Subtractio of Matrix :\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",sub[i][j]);
		}
		printf("\n");
	}
getch();
}
