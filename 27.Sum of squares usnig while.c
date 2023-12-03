//A program for sum of squares of nbumbers using WHILE loop.
#include<stdio.h>
int main()
{
    int Add=0;
    int n=3;
    while(n<=100)
    {
        Add=Add+n*n;
        n=n+1;
    }
    //Printing the output.
    printf("Sum=%d\n", Add);
    return 0;
}
