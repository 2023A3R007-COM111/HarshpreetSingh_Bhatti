//Demonstrating the Week day Assumptions.
#include<stdio.h>
enum day{Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};
int main()
{
    enum day week_start, week_end;
//Letting the user to choose the week strart and week end days .
    printf("Enter the start of the week (0=Monday,1=Tuesday,2=Wednesday,3=Thursday,4=Friday,5=Saturday,6=sunaday): ");
    scanf("%d", &week_start);

    printf("Enter the end of the week (0=Monday,1=Tuesday,2=Wednesday,3=Thursday,4=Friday,5=Saturday,6=sunaday): ");
    scanf("%d", &week_end);

    if(week_start == Tuesday)
    {
        week_end = Saturday;
    }
    else if(week_start == Monday)
    {
        week_end = Friday;
    }
    else
    printf("INVALID INPUT\n");

    printf("Your have enterned: \n");
//Printing the output.
    printf("start of the week: %d\n",week_start);
    printf("end of the week: %d\n", week_end);

    return 0;
}