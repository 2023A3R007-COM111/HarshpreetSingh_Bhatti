//Program defining the use of 1-D Array.
#include <stdio.h>
#define MAXVAL 15
#define COUNTER 11
int main()
{
    float value[MAXVAL];
    int i,low,high;
    int group[COUNTER]= {0,0,0,0,0,0,0,0,0,0,0};
    //Asking user for list of student marks.
    printf("Enter the marks of %d students\n",MAXVAL);
    for(i=0;i<MAXVAL;i++)
{
    printf("Enter the marks of student %d: ", i+1);
    scanf("%f",&value[i]);
    ++group[(int)(value[i])]/ 10;
    
}
//Printing the data and output in tabular form.
printf("\n GROUP    RANGE      FREQUENCY\n\n");
for (i=0;i<COUNTER;i++)
{
    low=i*10;
    if (i==10)
    high=100;
    else
    high=low+9;
    printf("%2d %3d to %3d %d\n",i+1,low,high,group[i]);

}
    return 0;
}
