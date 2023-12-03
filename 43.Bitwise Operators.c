//Demonstrating the working of bitwise operators 
#include<stdio.h>
int main()
{
//Asking user to enter integers.
     int a,b;
     printf("Enter two integers : ");
     scanf("%d %d",&a , &b);
     printf("The result of bitwise AND operator is a & b = %d\n", a&b);
     printf("The result of bitwise OR operator is  a | b = %d\n", a|b);
     printf("The result of bitwise XOR operator is  a ^ b = %d\n", a^b);
     printf(" ~a = %d\n", ~a);
     printf("~b = %d\n", ~b);
     printf("a <<1 = %d\n", a<<1);
     printf("b >>1 = %d\n", b>>1);
     return 0;
}