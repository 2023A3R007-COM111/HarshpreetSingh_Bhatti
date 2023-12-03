//Demonstrating the program in order to know where user has enterned a vowel or consonant using else if.
#include<stdio.h>
int main()
{
    char Input;
//Asking for input.
    printf("enter the Input:");
    scanf("%c", &Input);
//Conditions for inout to be a vowel.
    if((Input == 'a' || Input == 'e' || Input == 'i' ||Input == 'o' ||Input == 'u' ||Input == 'A' ||Input == 'E' ||Input == 'I' ||Input == 'O' ||Input == 'U' ))
    {
        printf("%c is a vowel \n",Input);
    }
    else if ((Input >='a' && Input <= 'z')||(Input >='A' && Input <= 'Z'))
    {
        printf("%c is a consonant \n",Input);
    }

    return 0;
}