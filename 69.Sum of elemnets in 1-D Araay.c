//Program for calculating the sum of elements in 1-D Array.
#include <stdio.h>
int main()
{ 
    int arr[5],i,s=0;
    for(i=0;i<5;i++)
    {
        //Asking user for elements of array of user choice.
        printf("Enter a[%d]:", i);
        scanf("%d", &arr[i]);
    }
    
    for(i=0;i<5;i++)
    {
       s += arr[i];
    }
    //Printing of the output.
    printf("\nSum of elements = %d",s);
    return 0;
}
