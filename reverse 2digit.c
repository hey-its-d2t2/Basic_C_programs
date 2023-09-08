/* Reverce Two Digit Number*/
#include<conio.h>
#include<stdio.h>
int main()
{
	int n,a,b,rev;
	printf("\n Enter Any Two Digit Number :- ");
	scanf("%d",&n);
	a=n%10;
	b=n/10;
	rev=a*10+b;
	printf("\n Your Given Number is %d",n);
	printf("\n Reverse is %d",rev);
	return 0;
	
}
/*
print("\n %d ",r);
printf("\n Reverse :- %d",rve);
printf("\n %d<=>%d",n,r);
*/
