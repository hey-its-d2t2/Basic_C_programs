#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
char name[20];
char mobno[10];
int m;
char in[10];
int indiaopt();
void login(){
	char name[20];
	char mobno[10];
    printf("\nEnter Youur Name : ");
    gets(name);
    printf("\nEnter Your Mobile No. : ");
    gets(mobno);
}
void signup(){
	char name[20];
	char mobno[10];
	char dob[10];
	char email[50];
	printf("\nEnter Youur Name : ");
    gets(name);
    printf("\nEnter Your Mobile No. : ");
    gets(mobno);
	printf("\nEnter Your Date of Birth : ");
	gets(dob);
	printf("Enter Your Email : ");
	gets(email);
}
int  topic(){
	int no;
	printf("\n%c1.%c  States and their  Capitals.",91,93);
	printf("\n%c2.%c  Couunteris and their  Capitals.",91,93);	
	printf("\n%c3.%c  National things.",91,93);
	printf("\n%c4.%c  National Rivers ",91,93);
	printf("\n Choose Option: ");
	scanf("%d",&no);
	return 	no;
}
int state(){
	int g,i;
	printf("\n\t\t%c%d.%c  States and their  Capitals.",91,m,93);
	printf("\n\t\t");
	for(i=0;i<=31;i++)
	{
		printf("%c",196);
	}
	printf("\n %c1.%c INDIA ",91,93);
/*	printf("\n\n%cA%c AMERICA \t   %cB%c BHUTAN\n%cC%c CHINA\t   %cD%c NEW DELHI",91,93,91,93,91,93,91,93);
	scanf("%c",&in);*/
	indiaopt();
	printf("\n\f %c2.%c AFGANISTAN ",91,93);
//	afga();
	return in[10];
	
}
int indiaopt(){
	printf("\n\n%cA%c AMERICA \t   %cB%c BHUTAN\n%cC%c CHINA\t   %cD%c NEW DELHI",91,93,91,93,91,93,91,93);
	scanf("%c",&in[0]);
	system("cls");
	printf("\n\n%cA%cKABUL\t   %cB%c BHUTAN\n%cC%c DAKA\t   %cD%c THIMPU",91,93,91,93,91,93,91,93);
	scanf("%c",&in[1]);
	
	}
/*int afga(){
	printf("\n\n%cA%cKABUL\t   %cB%c BHUTAN\n%cC%c DAKA\t   %cD%c THIMPU",91,93,91,93,91,93,91,93);
	scanf("%c",&in[1]);
}*/
int main()
{
	int i, los;
	char ind;
	//char mobno[10];
	//char name[20];
	printf("\t***	WELCOME TO GK TEST	***\n");
	printf("\t");
	for(i=0;i<=34;i++)
	{
		printf("%c",196);
	}
	/*printf("\n\tRegister Your Self,");
	printf("\nEnter Youur Name : ");
	gets(name);
	printf("Your Name : %s",name);
	printf("\nEnter Your Mobile No. : ");
	gets(mobno);
	scanf("%d",&mobno);
		printf("Your Mob No. : %s",mobno);
	system(cls);
	*/
	printf("\n \a1.%cLOGIN \t 2.%cSIGNUP \n",175,175);
	scanf("%d",&los);
	switch(los){
		case 1:
			login();
			break;
		case 2:
			signup();
			break;
		default :
			printf("\a INVILID CHHOICE !");
	}
//system("cls");
	m=topic();
	switch(m)
	{
		case 1:
		printf(" You choose %c%d.%c  States and their  Capitals.",91,m,93);
		system("cls");
		ind=state();
		break;
		case 2:
			printf(" You choose %c%d.%c  Couunteris and their  Capitals.",91,m,93);
			break;
		case 3:
			printf(" You choose %c%d.%c  National things.",91,m,93);
			break;
		case 4:
			printf(" You choose %c%d.%c  google.",91,m,93);
			break;
		default:
		printf("\a\a INVILID CHOICE ! ");
	}
	//system("cls");
//	ind=state();

	return 0;
	getch();
}
