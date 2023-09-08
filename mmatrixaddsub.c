/* Matrix Addition and Subtraction (2D Array)*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5][5],b[5][5],c[5][5],i,j,p,q,m,n;
	l:printf(" Enter Orde of 1st Matrix :- ");
	scanf("%d%d",&m,&n);
	printf("\nEnter Order of 2nd Matrix :- ");
	scanf("%d%d",&p,&q);
	if(m!=p && n!=q)
	{
		printf("\n Enter Same Order Of Matrix.");
		goto l;
	}
	 printf("\n Enter Elements of 1st Matrix.");
	 for(i=0;i<m;i++)
	 {
	 	for(j=0;j<n;j++)
	 	{
	 		printf("\n Enter Elements :-");
	 		scanf("%d",&a[i][j]);
		 }
	 }
	 printf("\n Enter Elements of 2nd Matrix.");
	 for(i=0;i<p;i++)
	 {
	 	for(j=0;j<q;j++)
	 	{
	 		printf("\n Enter Elements:-");
	 		scanf("%d",b[i][j]);
		 }
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		//	c[i][j]=a[i][j]-b[i][j];//(for Subtraction.)
		}
	}
	printf("\n 1st Matrix.");
	for(i=0;i<p;i++)
	 {
	 	for(j=0;j<q;j++)
	 	{
	 		printf("\n%d",a[i][j]);
		 }
	}
	printf("\n 2nd Matrix.");
	for(i=0;i<p;i++)
	 {
	 	for(j=0;j<q;j++)
	 	{
	 		printf("\n %d",b[i][j]);
		 }
	}
	printf("\n Addition of Matrix.");
	//printf("\n subtraction of Matrix.");
	for(i=0;i<p;i++)
	 {
	 	for(j=0;j<q;j++)
	 	{
	 		printf("\n %d",c[i][j]);
		 }
	}

}
