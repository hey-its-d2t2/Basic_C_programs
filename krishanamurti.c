/* Krishana Murti Number */
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,f,s=0,m,n1,n,j;
	printf("\n Enter Value of N :-");
	scanf("%d",&n);
	n1=n;
	while(n!=0)
	{
		m=n%10;
		f=1;
		for(j=1;j<=m;j++)
		f=f*j;
		s=s+f;
		n=n/10;
	}
	if(s==n1)
	printf("\n Krishanamurti Number,%d",s);
	else
	printf("\n Not a Krishanamurti Number,%d",s);
	getch();
	return 0;
}
