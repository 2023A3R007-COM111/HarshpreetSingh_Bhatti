#include<stdio.h>
 int main ()
 {
     char singleQuote = '\''; // Single quote character.
     printf("Single Quote: %c\n", singleQuote);

    char doubleQuote = '\"'; // double quote character.
     printf("Double Quote: %c\n", doubleQuote);

     char backslash = '\\';// Backslash character.
     printf("Backslash: %c\n", backslash);

     printf ("Hello\nWorld\n"); // New line (line feed) character.

     printf("Tabbed\tHii\tHow\tare\tyou\t\n");//Tabbed character.

     printf("Vertical\vTab\vCharacter\vDisplay\n"); // Vertical character.

     printf("remove a\b char\n"); //Remove character.
    
     printf("Carriage\rReturn\n");//Caariage character.
    
     printf("Form\fFeed\n"); //Form character.

     printf("Beep\a\n");//Beep character.
    
     char nullChar =  '\0';
     printf("Null Character: %c\n", nullChar);//Null character.
    
     char questionMark = '\?';
     printf("Question Mark: %c\n", questionMark); //Question Mark character.
     
     char hexvalue = '\x17';
     printf("Hex Value: %c\n",hexvalue);//Form character.
    
     return 0;
 }

