//A program for various arithematic operations to be performed using user defined functions.
#include<stdio.h>
#include<math.h>
//Defining the user defined functions for various operations.
int add(int x,int y);
int mul(int x, int y);
int min(int x, int y);
int div(int x, int y);
int mod(int x, int y);
int main ()
{
    int a,b;
    //Asking user for input.
    printf("Enter the value of first number: \n");
    scanf("%d", &a);
     printf("Enter the value of second number: \n");
    scanf("%d", &b);
    {
    //Sum operation:
    int SUM ;
    SUM =add(a,b);
    printf("SUM:%d\n", SUM);
    }
    //Subtraction operation.
    {
    int SUBTRACT ;
    SUBTRACT =min(a,b);
    printf("SUBTRACT:%d\n", SUBTRACT);
    }
    //Product operation.
    {
    int PRODUCT ;
    PRODUCT =mul(a,b);
    printf("PRODUCT:%d\n", PRODUCT);
    }
    //Divison operation.
    {
    int x,y,DIVISION ;
    DIVISION =div(a,b);
    if (x>y)
    {
    printf("DIVISION:%li\n", DIVISION);  
    }
    else 
     printf("Enter valid value of x and y for output to an INTEGER\n");
    }
    //Modulus operation.
    {
    int MODULUS;
    MODULUS =mod(a,b);
    printf("MODULUS:%d\n", MODULUS);  
    }
    
}
//Defining all the functions operations.
int add(int x,int y)
{  int SUM;
    SUM=x+y;
    return (SUM);
}
int mul(int x, int y)
{
    int PRODUCT;
    PRODUCT=x* y;
    return (PRODUCT);
}
int min(int x, int y)
{
    int SUBTRACT;
    SUBTRACT=x- y;
    return (SUBTRACT);
}
int div(int x, int y)
{
    int DIVISION;
    DIVISION=x/y;
    return (DIVISION);
}
int mod(int x, int y)
{
    int MODULUS;
    MODULUS=x%y;
    return (MODULUS);
}