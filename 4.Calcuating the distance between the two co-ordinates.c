//Demonstrating the function for calucating euclidean distance between the two co-ordinates.
#include<stdio.h>
#include<math.h>
int main ()
{
    float px1,py1,px2,py2,Output;
    // Takign input from the user.
    printf("Enter the coordinates of first point\n");
    scanf("%f\n %f\n",& px1, &py1);
    printf("Enter the coordinates of second point\n");
    scanf("%f\n %f\n", & px2,&py2);
    //Establishing the equation.
    Output = sqrt(pow(px2-px1, 2)+ pow(py2-py1,2));
    //Printing the output.
    printf("The value of Distance between the two points is: %f\n",Output);
    return 0;
}
