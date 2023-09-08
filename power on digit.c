/* Power on Digit*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int x,n,p;
	printf("\n Enter Base :- ");
	scanf("%d",&x);
	printf("\n Enter Power :- ");
	scanf("%d",&n);
	p=pow(x,n);
	printf("\n %d^%d = %d",x,n,p);
	return 0;
}
