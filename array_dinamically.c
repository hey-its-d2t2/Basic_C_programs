#include<stdio.h>
#include<string.h>
int main(){
	char *array;
	int i;
	system("cls");
	array = (char*)malloc(30*sizeof(array));
	printf("Write your notes : ");
	for(i=0;i<30;i++){
		gets(&array[i]);
		if(array[i]==29)
		{
			realloc(array,30*sizeof(array));
		}
	}
	//	if(strlen(array[i]==30),0){
	//		(char*)calloc(30,sizeof(char));
	//	}
	//	if(array[i]==14){
	//		printf("\n\aDo you want to add More ! ");
	//
	printf("You Have Entered : ");
	for(i=0;i<30;i++){
		printf(" %s  ",array[i]);}
	free(array);
	getch();
	return 0;
}
