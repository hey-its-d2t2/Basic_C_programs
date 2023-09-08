/* Perfect Number*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,x,s=0;
	printf("Enter Number : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		s=s+i;
	}
	if(s==n*2)
	printf("%d is Perfect Number.",n);
	else
	printf("\n %d is Not Perfect Number. ",n);
	getch();
}
