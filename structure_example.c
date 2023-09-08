#include<stdio.h>
#include<conio.h>
typedef struct student{
	int rollno;
	char  name[20];
	float  marks,*m;
	//m=&marks;
}stud;
int main(){
	stud s;
	system("cls");
	printf("\a------------------------------------------\n");
	printf("Enter Details Of Student :\n");
	printf("------------------------------------------");
	printf("\n\aName :");
	gets(s.name);
	fflush(stdin);
	printf("\n\aRoll No. :");
	scanf("%d",&s.rollno);
	fflush(stdin);
	printf("\n\aMarks :");
	scanf("%f",&s.marks);
	printf("----------------------------------------\n"); 
	printf("Details of Student\n");
	printf("----------------------------------------\n");
	printf("Name  \tRollNo.  \tMarks\n");
	printf("----------------------------------------\n");
	printf("\a%s\t%3d\t%5.2f",s.name,s.rollno,s.marks);
	getch();	
}
