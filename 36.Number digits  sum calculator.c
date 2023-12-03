//Calculating the sum of digits of user choice digit.
#include<stdio.h>
int main()
{
    int input1,input2,sum;
     int result=0;
//Asking user for desired number.
    printf("enter the number: ");
    scanf("%d",&input2);

    while(input2>0)
    {
        input1=input2%10;
        result=result+input1;
        input2=input2/10;
    }
    //Printing the sum of digits as output.
    printf("Sum is %d.",result);

    return 0;
}p