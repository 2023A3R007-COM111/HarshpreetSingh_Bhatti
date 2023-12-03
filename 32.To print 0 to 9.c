//A program for printing numbers from 0 to 9 on console.
#include<stdio.h>
int main()
{
    int input;

    for(input=0;input<=9;input=input+1)
    {
        printf("%d\t",input);
    }
    printf("\n");

    return 0;
}