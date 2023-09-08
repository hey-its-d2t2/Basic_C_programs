//Prime Number or Not
#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,c=0;
	printf("\nEnter Number : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			c++;
		}
	}
	if(c==2)
	{
		printf("The Given No. %d is Prime Number.",n);
	}
	else
	{
		printf("The Given No. %d is  Not Prime Number.",n);
	}
	getch();
}
