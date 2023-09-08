//Prime Number Between N1 And N2
#include<stdio.h>
#include<conio.h>
int main()
{
	int n1,n2,i,j,c=0;
	//Inputing Numbers
	printf("\nEnter The First Number : ");
	scanf("%d",&n1);
	printf("\nEnter Secoand Number : ");
	scanf("%d",&n2);
	//Process
	for(i=n1;i<=n2;i++)
	{
		c=0;
		for(j=2;j<i/2;j++)
		{
			if(i%j==0)
			{
				c=c+1;
				break;
			}
		}
		if(c==0)
		{
			printf("%d ",i);
		}
	}
	getch();
}
