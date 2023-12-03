//Performing a function based on "No argument and a return value".
#include <stdio.h>
int mygetchar(void);
int main()
{
    int ch;
    //Asking a input.
    printf("Enter a charcter:\n");
    scanf("%d" ,&ch);
    ch = mygetchar();
    printf("The character entered is: %c\n", ch);
    return 0;
}
int mygetchar(void)
{
    int c;
    c = getchar();
    return c;
}