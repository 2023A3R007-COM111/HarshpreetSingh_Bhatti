//Demonstrating the use of call by reference function.
#include<stdio.h>
void fn(int*,int*);
int main ()
{
    int a=10;
    int b=20;
    fn(&a,&b);// swapping the numbers value.
    printf("The caller function values are:\na=%d b= %d\n",a,b);
    return 0;
}
void fn(int* x,int* y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
    printf("Inside function values are\nx=%d y=%d\n",*x,*y); //variables values are copied and exchanged in the copy version as well as orginal also.
}