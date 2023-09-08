/* C program to print all Odd numbers from 1 to n*/
#include <stdio.h>
int main()
{
    int i, n;
	printf(" This program is to print all Odd numbers from 1 to n");   
    printf("\nEnter Last Number : ");
    scanf("%d", &n);

    printf("All odd numbers from 1 to %d are: \n", n);
    for(i=1; i<=n; i++)
    {
        if(i%2!=0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
