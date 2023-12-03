//Program demonstrating the use of GOTO statement.
#include<stdio.h>
#include<math.h>
int main ()
{
    float num1,num2;

read:
//Asking user for non negative number.
    printf("Enter a non-negative number(or a negative number to exit): ");
    scanf("%f", &num1);

    if (num1<0)
        goto end;

        num2=sqrt(num1);
        printf("%f %f\n", num1 , num2);
        //Passing the value through goto statement.
        goto read;
end:
    printf("Exiting the program.\n");
    return 0;
}










