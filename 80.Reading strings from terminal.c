#include<stdio.h>
int main ()
{
    char input[81]; //Adjust the size according to your needs.
    char ch;
    int c;
    c=0;
    printf("Enter a line of text: \n");
    //Read characters until a new line character is encountered.
    do
    {
        ch=getchar();
        input[c] =ch;
        c++;
    }
    while(ch !='\n');
    c= c - 1;
    //Terminating the string with a null character.
    input[c] = '\0';
    //Print the entered line of text.
    printf("Entered text: %s\n", input);
    return 0;
}