//Program for determing the grade of the student based on the user input,using switch statement.
#include<stdio.h>
int main ()

{
    int grade ;
char grade;
//Asking the student marks.
    printf("Enter the student's marks: ");
    scanf("%d", &grade);

    int index = grade/10;
    //Using swtich statement asigning the grades and case numbers as well.
    switch(index)
    {
        case 10:
        case 9:
        case 8:
            grade = 'H';
            break ;
        case 7:
        case 6:
        grade = '1';
                break;
                case 5:
            grade = '2';
            break;
            default:
                case 4:
                    grade ='F';\
                    break;
    }
    //Printing grade as output.
    printf("The grade obtained by the student is: %c\n",grade);
    return 0;
}
