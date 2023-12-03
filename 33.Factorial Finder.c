//A program for finding the factorial of a number.
#include<stdio.h>
int main()
{
    int number;
    long long factorial=1;
//Asking user for desired number.
    printf("enter the desired number: ");
    scanf("%d", &number);
    if(number<0)
    {
        printf("factorial is not defined for neagative integer.\n");
    }
    else
    {
        for(int n=1;n<=number;n++)
    {
        factorial*=n;
    }
    }
    //Printing the output.
    printf("factorial of %d=%lld\n",number,factorial);

    return 0;
}