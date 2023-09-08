/*Automorphic No. */
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int c,n,m,x,sq,a;
//	double sq;
//  double m; 
	printf("\n Enter Number :- ");
	scanf("%d",&n);
	c=0;
	x=n;
	while(n!=0)
	{
		c++;
		n=n/10;
	}
	n=x;
	sq=n*n;
	a=pow(10,c);
	m=sq % a;
	
	if(m==n)
	{
		printf("\n Given  Number is Automorphic Number. ");
	}
	else
	{
			printf("\n Given  Number is Not Automorphic Number. ");
	
	}
}
