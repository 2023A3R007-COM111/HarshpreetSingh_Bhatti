//Program for printing of multiplication using 2-D Array.
#include<stdio.h>
int main ()
{
    int row,column,mul[5][5];
    int r,c;
    printf("MULTIPLICATION TABLE\n\n");
    printf("  ");
    for (c=1;c<=5;c++)
    printf("%4d",c);
    printf("\n");
    printf("______________________________________________\n");
    for(r=0;r<=5;r++)
    {
        row=r+1;
        printf("%d |",row);
        for(c=1;c<=5;c++)
        {
            column=c;
            mul[r][c]=c*r;
            printf("%4d",mul[r][c]);
        }
        printf("\n");
    }
    return 0;
}