//Performing a function based on "Nesting of functions".
#include<stdio.h>
float ratio(int x, int y, int z);
int difference(int x, int y);
int main()
{
int a,b,c;
//Asking for three inputs from user.
printf("Enter the value of the a, b and c :\n");
scanf("%d %d %d", &a, &b, &c);
printf("The calculated ratio is: %f\n", ratio(a,b,c));
return 0;
}
float ratio(int x, int y, int z)
{
    if (difference(y, z))
    {
       return (float)x / (y - z);
    }
    else
    {
    return 0.0;
    }
}
int difference(int p, int q)
{
if (p != q)
{
    return 1;
}
else 
{
  return 0;  
}
}