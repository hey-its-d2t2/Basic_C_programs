//Fibbonaaci Serice upto Given Number
#include<stdio.h>
#include<conio.h>
int main()
{
	int a=0,b=1,c=0,n;
	printf("\nEnter the Last Number,Where upto print fibbonaci serise.");
	printf("\n\nNumber : ");
	scanf("%d",&n);
	printf("The Fibbonacci Serise upto %d is : %d",n,c);
	while(c<=n)
	{
		printf(" %d\t",c);
		a=b;
		b=c;
		c=a+b;
	}
	getch();
}
