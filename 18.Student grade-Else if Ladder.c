//Program for determing the grade of a student using else if ladder.
#include<stdio.h>
int main ()
{
    //Asking user for student marks.
    int averageMarks;
    printf("Enter the average marks");
    scanf("%d", & averageMarks);
    //Deducing the statments and corresponding print statements according to the marks of the student.
    if (80<=averageMarks && averageMarks<=100)
    {
        printf("Grade alloted: Honours\n");
    }
    else if (60<=averageMarks && averageMarks<=79)
    {
        printf("Grade alloted: First Division\n");
    }
    else if (50<=averageMarks && averageMarks<=59)
    {
        printf("Grade alloted: Second Division\n");
    }
    else if (40<=averageMarks && averageMarks<=49)
    {
        printf("Grade alloted: Third Division\n");
    }
    else if (0<=averageMarks && averageMarks<=39)
    {
        printf("Grade alloted: FAIL\n");

    }
    else
    {
        printf("Enter Valid Input");
    }
    return 0;
}
