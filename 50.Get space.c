//Demonstrating a program showing getspace function application.
#include<stdio.h>
int main ()
{
    int space,rows,i,j;
    //Asking user the numbers of rows.
    printf("Enter the number of rows : \n");
    scanf("%d", &rows );
    {
        for(i=1;i<=rows;i++)
        {
        for(space=1; space<=rows-i;space++)
        {
            printf(" ");
        }
        for (j=1;j<=2*i-1;j++)
        {
            printf("*");
        }
        printf("\n");
        }
    }
    return 0;


}