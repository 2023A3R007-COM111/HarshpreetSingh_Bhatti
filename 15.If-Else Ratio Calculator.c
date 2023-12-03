//Program for finding the ratio of the user choice numbers.
#include<stdio.h>
int main ()

 {
     int num1,num2,num3,num4;
     float ratio;
     //Asking the user for input.
    printf ("Enter the values of integers");
     scanf("%d %d %d %d", &num1,&num2,&num3,&num4);
//Defining the statements and operation.
     if (num3-num4!=0)

     {
         ratio =(float)(num1+num2)/(float)(num3-num4);
         printf("ratio=%f\n",ratio);
     }
     else
     {
         printf("Operation is invalid");
     }
     return 0 ;
 }
