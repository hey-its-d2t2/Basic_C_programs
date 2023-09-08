/*HCF and LCM */
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int a,b,i,hcf,lcm;
	printf("%c",218);
	for(i=0;i<=115;i++)
	 printf("%c",196);
	printf("%c",191);
//	goto("1,20");
	printf("\n \t\t\t\t\t\tHCF and LCM");
	printf("\n%c",192);
	for(i=0;i<=115;i++)
	 printf("%c",196);
	printf("%c",217);
	printf("\n Enter Value for A :- ");
	scanf("%d",&a);
	printf("Enter Value for B :- ");
	scanf("%d",&b);
	for(i=1;(i<=a && i<=b);i++)
	{
			if(a%i==0 && b%i==0)
			hcf=i;	
	}	
	lcm=(a*b)/hcf;
	printf("\n LCM = %d",lcm);
	printf("\n HCF = %d",hcf);
}
