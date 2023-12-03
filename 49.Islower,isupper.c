//Demonstrating the use of islovwer and isupper.
#include<stdio.h>
#include<ctype.h>
int main ()
{
    char alphabet;
    //Ask for input.
    printf("Enter an alphabet:/n");
    putchar('\n');
    alphabet= getchar();
    if(islower(alphabet))
    {
        putchar (toupper(alphabet));
    }
    else 
    putchar (tolower(alphabet));
return 0;
}