#include<stdio.h>
float max (float a[],int num);
int main()
{
    float value[4]={2.5,-4.75,1.2,3.67};
    //Print the result of calling the 'largest' function.
    printf("Largest value is : %f\n",max(value,4));
    return 0;
}
//Function defination to find the largest value in an array.
float max(float a[],int num)
{
    int i;
    float large;
    //Assume the first element to be the maximum.
    large=a[0];
    //Iterate through the array to find the largest value.
    for(i=1;i<num;i++)
    {
        if(large<a[i])
        large=a[i];
    }
    //Return the largest value.
    return large;
}
