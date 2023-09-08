//Transpose of Matrix
#include<stdio.h>
#include<conio.h>
int main()
{
	int arry[10][10];
	int i,j,m,n;
	//Inputing Order of Matricx
	printf("\nEnter The Order Matrix :");
	scanf("%d%d",&m,&n);
	//Inputing Elements Of matrix
	printf("\nEnter the valves : \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\nEnter Elements :");
			scanf("%d",&arry[i][j]);
		}
	}
	//Printing the Matrix
	printf("\nThe Given Matrix is : \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",arry[i][j]);	
		}
		printf("\n");
	}
	//Transposing The Matrix and Print the result
	printf("Transpose Of Matrix is : \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d\t",arry[j][i]);
		}
		printf("\n");
	}
	getch();
	
}
