//Reveerse of Digit
#include<stdio.h>
#include<conio.h>
int main()
{
	int num,temp=0,cont;
	//Input
	printf("Enter A Number : ");
	scanf("%d",&num);
	cont=num;
	while(num != 0)
	{
		temp = temp * 10;
		temp = temp + num % 10;
		num = num / 10;
	}
	//output
	printf("The Reverse of %d is : %d",cont,temp);
	getch();
	return 0;
}

