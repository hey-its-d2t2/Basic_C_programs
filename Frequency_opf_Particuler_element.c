//Frequency of each(particuler) element in a List (array).
#include<stdio.h>
#include<conio.h>
#define MAX 100
int main(){
	int cnt,n,;
	for(i=0;i<n;i++){
		fre[i]=-1;
	}
	for(i=0;i<n;i++){
		cnt=1;
		for(j=i+1;j<n;j++){
			if(a[i]==a[j]){
				cnt++;
				fre[j]=0;
			}
		}
	}
	if(fre[i]!=0){
		fre[i]=cnt;
	}

	printf("\nThe frequency of each elements are:");
	for(i=0;i<n;i++){
		if(fre[i]!=0)
		printf("\n%d occurs %d times",a[i],fre[i]);
	}
}
