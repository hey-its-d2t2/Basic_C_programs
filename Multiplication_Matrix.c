// Multiplication of matrix
#include<stdio.h>
#include<conio.h>
int main()
{
	int mult[10][10],first[10][10],second[10][10];
	int i,j,k,m,n,p,q;
	l:
	printf("Enter The Order of First Matrix : ");
	scanf("%d%d",&m,&n);
	printf("Enter The Order of Secoand Matrix : ");
	scanf("%d%d",&p,&q);
	if(n!=p){
		printf("Enter The Same Value for No. Of Coulamn Of First Matrix ");
		printf("\nand No. of Row of Seoand Martrix\n");
		goto l;
	}
	//Input First Matrix
	printf("Enter the Values of 1st Matrix : ");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\nEnter Elements : ");
			scanf("%d",&first[i][j]);
		}
	}
	//Input Secoand Matrix
	printf("\nEnter the Values of 2nd Matrix : ");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			printf("\nEnter Elements : ");
			scanf("%d",&second[i][j]);
		}
	}
	// Printing Both Matrix
	printf("\nFirst Matrix is : \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",first[i][j]);
		}	
		printf("\n");
	}
	
	printf("\nSecoand Matrix is : \n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			printf("%d\t",second[i][j]);
		}
		printf("\n");
	}
	//Multipling  Both Matrix
	for(i=0;i<m;i++)
	{
		for(j=0;j<q;j++)
		{
			mult[i][j]=0;
			for(k=0;k<n;k++)
			{

				mult[i][j]=mult[i][j]+first[i][k]*second[k][j];
			}	
		}
	}	
	//Printing The Result
	printf("\nMultiplication Of Matrix is : \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<q;j++)
		{
			printf("%d\t",mult[i][j]);	
		}
		printf("\n");
	}
getch();
}
