//Demonstrating the program for swapping the number.
#include<stdio.h>
int main()
{
    int num1, num2;
    //Taking inputs from the user.
    printf("Enter the two numbers : \n");
    scanf("%d\n%d\n", &num1, &num2);
    //Printing the input before the swapping.
    printf("Before swapping Num1 is : %d and Num2 is %d \n",num1,num2);
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
     scanf("%d\n%d\n", &num1, &num2);
    //Printing the input after the swapping.
    printf("After swapping Num1 is : %d and Num2 is : %d \n",num1,num2);
    return 0;
}
    
