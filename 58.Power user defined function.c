//Performing a function based on "Power-a user defined function".
#include<stdio.h>
double power(int x, int y);
int main ()
{
    int x,y;
    //Asking for input.
    printf("Enter the value of the x and y :\n");
    scanf(" %d%d", &x,&y);
printf("The answer is :%f\n",power(x,y));
return 0;
}
double power(int x, int y)
{
    double p=1;
    if(y>=0)
    {
        while(y--)
        {
            p *= x;
        }

    }
    else
    {
        while (y++) 
        {
            p /= x;
        }
 
  }
  return (p);  
}