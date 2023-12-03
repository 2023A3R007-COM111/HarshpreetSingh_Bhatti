//Program for sum of odd numbers sum.
#include<stdio.h>
int main()
{
    int Add,N;
    N=1;
    Add=0;
    do
    {
        Add=Add +N;
        N=N+2;
    }
    while(Add<40 && N<10);
    //Printing the resultant of addition operator.
    printf("%d %d\n", N,Add);
    return 0;
}

