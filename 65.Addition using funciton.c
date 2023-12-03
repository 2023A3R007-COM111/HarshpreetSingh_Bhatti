//Demonstrating the use of user defined addition function.
#include<stdio.h>
int add(int num1,int num2)
{ int sum;
//Add operation.
   sum=num1+num2;
    return sum;
}
int main()
{
    int var1,var2;
    //Asking user for the input of two numbers.
    printf("Enter number 1: ");
    scanf("%d", &var1);
    printf("Enter number 2: ");
    scanf("%d", &var2);
    int res= add(var1,var2);
    //Printing the output.
    printf("Output: %d",res);
}