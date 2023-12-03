//Calculating the square ofg five numbers in loop.
#include<stdio.h>
#include<math.h>
int main ()
{
double num1,num2;
int count =1;
//Asking userr for five real values.
printf("Enter FIVE real values in a LINE\n");

read:
    scanf("%lf", &num1);

    if (num1<0)
    {
        printf("Value - %d is negative\n",count);
    }
    else
    {
        num2=sqrt(num1);
        printf("%lf %lf\n", num1 , num2);
    }
        count = count + 1 ;
        if (count<=5)
        {

        goto read;
        }
    printf("End of computation\n");
    return 0;
}










