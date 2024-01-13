#include <stdio.h>
   union Rollnumber {int rollnumber;};
    union Marks{float marks;};
    union Grade{char grade;};
    int main ()
    {
        union Rollnumber roll;
        union Marks marks;
        union Grade grade;
        printf("Roll number:\n");
        scanf("%d",&roll.rollnumber);
        printf("Grade:\n");
        scanf("%d",&grade.grade);
        printf("Roll number:\n");
        scanf("%d",&marks.marks);
        printf("Student info:\n");
        printf("Roll number:%d\n",roll.rollnumber);
        printf("Marks :%.2f\n",marks.marks);
        printf("Grade :%c\n",grade.grade);    
        return 0;
    }
