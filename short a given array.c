/* A 'C' Progrma to Short a given Array */
#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10],i,j,n,temp; /* Decleration */
	//clrscr();
	/* Input */
	printf("Enter total no.of elements: ");
	scanf("%d",&n);
	//printf(" Enter elements %d:",i+1);
	for(i=0;i<n;i++){
		printf(" Enter elements %d:",i+1);
		scanf("%d",&a[i]);}
	printf("\n Given Elements are:");
		for(i=0;i<n;i++)
	printf("%d ",a[i]);
	/* Process */
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
/* Output */
	printf("\n Elements after shorting:");
		for(i=0;i<n;i++)
	printf("%d ",a[i]);
    getch();
}
