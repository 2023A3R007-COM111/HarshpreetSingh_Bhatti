//A program for printing the table of user choice number till 20.
#include <stdio.h>
int main()
{
   int Number,Multipier;
 //Asking user for number of his\her choice.
    printf("Enter the number of your choice: \n");
    scanf("%d",&Number);
 //Using For loop for statisfying multi equations.
    for(Multipier=1; Multipier<=20; ++Multipier)
    {
        printf("%d * %d = %d \n", Number, Multipier, Number*Multipier);
    }
}