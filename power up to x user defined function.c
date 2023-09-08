/* A 'c' Program to calculate x to the power n */
/* Using user Defined Functiion */
#include<stdio.h>
#include<conio.h>
int main()
{
	float x,n,p;   /* decleration */
	float power(float,float);
//	system(cls);
	/* INPUT */  
	printf(" x = ");
	scanf("%f",&x);
	printf(" n = ");
	scanf("%f",&n);
	/* PROCESS */
	p=power(x,n);
	/* OUTPUT */
	printf(" Result = %.3f",p);
	getch();
}
float  power(float x,float n)
{
	float p=1.0;
	int i;
	for(i=1;i<=n;i++)
		p=p*x;
	return p;
}

