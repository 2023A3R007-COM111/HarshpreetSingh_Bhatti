//Demonstrating the Basic Mathamatics Functions.
#include<stdio.h>
int main()
{
    
    int Input1, Input2;
    float a,b,c,d,e;
//Taking input from user.
    printf("Enter the first integer input: ");
    scanf("%d", &Input1);
    printf("Enter the second integer input: ");
    scanf("%d", &Input2);
//Performing Addition of the two inputs.
    a= Input1+Input2;
    printf("Addtion: %f\n", a);
//Performing Subtraction of the two inputs.
    b= Input1-Input2;
    printf("Difference: %f\n", b);
//Performing Product of the two inputs.
    c= Input1*Input2;
    printf("Product: %f\n", c);
//Performing Divsion of the two inputs.
    d= Input1/Input2;
    printf("Division: %f\n", d);
//Performing Modulus of the two inputs.
    e= Input1%Input2;
    printf("Mod: %f\n", e);

    return 0;
}