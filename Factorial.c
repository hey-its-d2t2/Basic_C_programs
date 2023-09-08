/* FACTORIAL*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i;
	long int f=1;
	printf("\n Enter Number That Youn Want To Find Factorial.");
	printf(" N :- ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		f=f*i;
	printf("\n Factorial :- %d",f);
	getch();
}
