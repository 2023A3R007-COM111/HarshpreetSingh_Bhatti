//Demonstrating a program for functionality of recursion.
#include<stdio.h>
int factorial (int n);
int main ()
{
    int num;
    //Asking user for positive number input.
    printf("The value of positive number: \n");
    scanf("%d", &num);
    if (num<0)
    {
        printf("Enter popsitive number !");
    }
    else{
        printf("factorial of %d is : %d\n",num,factorial(num));
    }
    return 0;
}
int factorial (int n)
{
    int fact;
    if (n==1)
    {return (1);}
    else{
        fact=n*factorial(n-1);
        return (fact);
    }
}