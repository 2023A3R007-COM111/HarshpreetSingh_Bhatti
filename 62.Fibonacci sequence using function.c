//Demonstrating the fibonacci sequence using user defined functions.
#include<stdio.h>
int fibonacci(int n);
int main ()
{
    int num;
    //Asking user postive number of his/her choice.
     printf("The value of positive number: \n");
    scanf("%d", &num);
    if (num<=0)
    {
        printf("Enter non-zero popsitive number !");
    }
    else{

        int result=fibonacci(num);
        if (result==-1){printf("INVALID OUTPUT");}
        else{printf("The %dth term in the fibonacci series is : %d\n",num,result);
    }
    }
    return 0;
}
int fibonacci(int n)
{
    if(n<=0)
    {
    printf("INVALID OUTPUT");
    return -1;
        
    }
    else if (n==1 || n==2)
    {
        return 1;
        
    }
    else
    {
        return (fibonacci(n-1)+fibonacci(n-2));
    }
}