//HCF and LCM
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,i,hcf,lcm;
	printf("Enter Value of 'A' : ");
	scanf("%d",&a);
	printf("\nEnter Value of 'B' : ");
	scanf("%d",&b);
	for(i=1;(i<=a&&i<=b);i++)
	{
		if(a%i==0 && b%i==0){
			hcf = i;
		}
	}
	lcm=(a*b)/hcf;
	printf("\n LCM = %d",lcm);
	printf("\n HCF = %d",hcf);
	getch();
}
