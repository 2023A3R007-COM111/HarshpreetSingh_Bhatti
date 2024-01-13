#include<stdio.h>
// Structure defination.
struct personal
{
    char identity[50];
    char jiondate[20];
    float salary;
};
int main ()
{
    // Declare a variable of type struct personal.
    struct personal person;
    
        // Input information from the user.
        printf("Enter the name of the person:\n");
        scanf("%s",person.identity);
        printf("Enter the joining date of the person:\n");
        scanf("%s",person.jiondate);
        printf("Enter the salary of the person:\n");
        scanf("%f",&person.salary);
        // Print the information.
        printf("\nPerson Information:\n");
        printf("Name:%s\n", person.identity);
        printf("Join date:%s\n", person.jiondate);
        printf("Salary:%.2f\n", person.salary);
    return 0;
    
}