//Program depicting the use case of 1-d array.
#include <stdio.h>
int main()
{ 
    int onedi[5],i;
    for(i=0;i<5;i++)
    {
        //Asking userr for eleemnts of the array/
        printf("Enter a[%d]:", i);
        scanf("%d", &onedi[i]);
    }
    printf("\nPrinting elements of the array: \n\n");

    for(i=0;i<5;i++)
    {
        printf("%d",onedi[i]);
    }
    return 0;
}