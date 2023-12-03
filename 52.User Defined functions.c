//Demonstrating the use of user defined functions 
#include<stdio.h>
//Declaring a function by the name viod f1(void).
void f1(void);
int main ()
{
    f1();
    printf("Welcome to MIET ECE department\n");
    f1();
    return 0;
}
//Defining the decalared function operation.
void f1(void)
{
    int i;
    for (i=1;i<40;i++)
    {
        printf("-");
    }
    printf("\n");
}