#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k,m,num,c,tmp;
    printf(" ***** PYRAMID ***** \n\n");
    printf("Enter num of lines : ");
    scanf("%d",&num);
    for(i=1; i <= num; i++) {
        c=i;
        for(k=1; k <= (num-i); k++)
            putchar(' ');
        for(j=i; j>=1; j--) {
            if(c>9) {
                printf("%d",0);
                tmp=c;
            }

            else {
                printf("%d",c++);
                tmp=c;
            }

        }
        tmp--;

        for(m=tmp; m>i;)
            printf("%d",--m);
        printf("\n");
    }
    getch();
}