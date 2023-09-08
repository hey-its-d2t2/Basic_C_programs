#include<conio.h>
#include<stdio.h>
int main()
{
	int m,x,s,n;
	printf("\n Enter The Number:- ");
	scanf("%d",&n);
	x=n;
	while(n>9)
	{
		s=0;
		while(n!=0)
		{
			m=n%10;
			n=n/10;
			s=s+m;
		}
		n=s;
	}
	if(n==1)
	printf("%d is Magic Number.",x);
	else
	printf("%d is Not Magic Number.",x);
	getch();
	
}
