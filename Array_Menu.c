/*
			Menu  Based Program Of Array 
			 
			****    Choice Menu     ****
			A. Read New elements
			B. Display the elements Vertically
			C. Display the elements Horizontally
			D. Calculate the sum and average of elements
			E. Count the total even numbers
			F. Count the total odd numbers
			G. Calculate the sum of all odd elements
			H. Calculate the sum of all even elements
			I. Search a particular element
			J. Count the total number of occurrences of the given element.
			K. Sort the elements in Ascending/descending order
			L. Insert the given element at specified location/position.
			M. Delete the given element from specified location/position.
			N. Insert element at beginning
			O. Insert element at end
			P. Delete element from beginning
			Q. Delete element from end
			R. Remove the duplicate elements
			S. Exit

*/
#include <stdio.h>
#include <stdlib.h>
#define 	MAX		100

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
		char ch;
		int arr[MAX],n;
		int i;
		//Asking for total elements
		printf("Enter the total number of elements(N) : ");
		scanf("%d",&n);
		// Input the array elements
		printf("Now, enter %d elements one by one :",n);
		for(i=0;i<n;i++){
			printf("\nN%d : ",i+1);
			scanf("%d",&arr[i]);
		}
		/*
		//Printint the array elemnents
		printf("Elements are :\n ");
		for(i=0;i<n;i++){
		printf("%d\t",arr[i]);
		}
		*/
		printf(".........................................\n");
		printf("\t\tChoice Menu\n");
		printf(".........................................\n");
		printf("A.  Display the elements  Vertically\n");
		printf("B.  Display the elements Horixontally\n");
		printf("C.  Calculate the sum and average of elements\n");
		printf("D.  Count the total even numbers\n");
		printf("E.  Count the total odd numbers\n");
		printf("F.  Calculate the sum of all even numbers\n");
		printf("G.  Calculate the sun of all even elements\n");
		printf("H.  Search the partculer element\n");
		printf("I.  Count the total occuurrences of the given element\n");
		printf("J.  Sort the elements in Assending/Descending order\n");
		printf("K.  Insert the given element at specifed locatioon/position\n");
		printf("L.  Delete the given element at specified location/position\n");
		printf("M.  Insert element at begning\n");
		printf("N.  Insert element at end\n");
		printf("O.  Delete element from beginning\n");
		pirntf("P.  Delete element from en\nm");
		printf("Q.  Remove the diuplicate elements\n");
		printf("R.  Read new elements\n");
		printf("S.  EXIT\n");

		
		
		
		
	return 0;
}
