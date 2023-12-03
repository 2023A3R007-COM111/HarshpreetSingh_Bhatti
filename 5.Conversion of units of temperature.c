//Demonstrating the unit conversion for the temperature.
#include<stdio.h>
#include<math.h>
int main ()
{
    float TempCelsisus,TempFahrenheit;
    //Enter the value of temperature in Fahrenheit.
    printf("Enter the value of temperature in Fahrenheit\n");
    scanf("%f",&TempCelsisus);
    TempFahrenheit=5.0/9.0*(TempCelsisus-32);
    //Printing the value of temperature in Celsius.
    printf ("The value of temperature in celsius is %f",TempFahrenheit);
    return 0;
}
