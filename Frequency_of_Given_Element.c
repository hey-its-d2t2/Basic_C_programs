// Frequency of Given element in array(list).
#include<stdio.h>
#include<conio.h>
#define MAX 100
int main(){
	int array[MAX],i,count=0,size,freq_ele;
	//clrscr();
	printf("Enter Size of Array : ");
	scanf("%d",&size);
	printf("Now,\n Enter Elements one by one : \n");
	for(i=0;i<size;i++){
		printf(" N[%d] : ",i+1);
		scanf("%d",&array[i]);
	}	
	printf("\nEntered Elements are : ");
	for(i=0;i<size;i++){
		printf("%d ",array[i]);
	}
	printf("\nEnter Element Which You Want To Find Frequency of That Element : ");
	scanf("%d",&freq_ele);
	for(i=0;i<size;i++){
		if(freq_ele==array[i]){
			count++;
		}
	}
	printf("\nFrequency of %d is %d times.",freq_ele,count);
	getch();
	return 0;
}
