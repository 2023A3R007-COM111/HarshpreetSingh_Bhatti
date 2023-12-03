//Demonstrarting the program for function of square.
#include<stdio.h>
float sqaure(float x)
{ float p;
p=x*x;
return (p);
}
int main()
{
    float var1,var2;
    //Asking user for number whose square is to be calculated.
    printf("Enter number for finding square:\n ");
    scanf("%f", &var1);
   var2=sqaure(var1);
   //Printing the square with its number.
   printf("\nSqaure of the given number %f is %f",var1,var2);
}