//Program to check whether the number is prime or not a prime number.
#include <stdio.h>
int main()
{
  int i,n=2,a,prime=0;
  //Asking user to enter a number.
  printf("Enter the number:");
  scanf("%d",&i);
  while(n<i)
  {
    if(i%n==0)
    {
      prime++;
    }
    n++;
  }
  if(prime==0)
  {
    printf("This number is Prime");
  }
  else
  {
    printf("This number is Not Prime");
  }
  return 0;
}