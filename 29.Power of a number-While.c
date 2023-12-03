//Program for calculating the power of a number.
#include<stdio.h>
int main()
{
    int count, n;
    float x,y;
    //Asking user for number and its power of user choice.
    printf("enter the values of x and n: ");
    scanf("%f %d", &x, &n);
    y=1.0;
    count=1;
    while(count<=n)
    {
        y=y*x;
        count++;
    }
    //Printing the result.
    printf ("x=%f; n=%d; x is the power of n= %f\n",x,n,y);
    return 0;
}