//Program for calculating the salary based on number of products sold in a week.
#include<stdio.h>
int main()
{
    int x;
    double weeklysalary;
//Asking user for input.
    printf("enter the number of products sold in a week: ");
    scanf("%d", &x);
//Decalring the statement.
    weeklysalary=(x<40)?(4*x+100):((x==40)?300:(4.5*x+150));
//Printing the output.
    printf("weekly salary: %.2f\n", weeklysalary);

    return 0;
}