//A program in order to  perform the following tasks to read data into structure members by a function,to validate the date entered by another function and to print the date in the format April 29, 2023 by a third function.

#include<stdio.h>
// Define the structure with three integer type data,i.e day,month and year.
struct Date {
    int day;
    int month;
    int year;
};

// First Function to read data into structure members
void readDate(struct Date *data) {
    //Asking user for the input date of user choice.
    printf("Enter the date of your choice:\n");
    scanf("%d %d %d", &data->day, &data->month, &data->year);
}

// A new formed function to validate the entered date.
int verifieddate(const struct Date *date) {
    //Testing the case if user enters the vaild month number or not.
    if (date->month < 1 || date->month > 12) {
        printf("ATTENTION! Please enter the valid month number.\n");
        return 0;
    }
    //Testing the case if user enters the valid month days or not.
    if (date->day < 1 || date->day > 31) {
        printf("ATTENTION! Please enter the valid month days.\n");
        return 0;
    }
    //Testing the case if user enters the valid year or not.
    if (date->year < 0) {
        printf("Attention! Please enter the valid year.\n");
        return 0;
    }
    return 1;
}

// Function to print the date in the specified format
void orderDate(const struct Date *data) {
    // Creating an array to give the output date in format required.
    char *months[] = {"January", "February", "March", "April", "May", "June", 
                      "July", "August", "September", "October", "November", "December"};

    printf("Formatted date: %s %d, %d\n", months[data->month - 1], data->day, data->year);
}

int main() {  
    struct Date finaldate;

    // Final function to read data into structure members.
    readDate(&finaldate);

    // Validatation of the entered date
    if (verifieddate(&finaldate)) {
        // Print the date in the specified format
        orderDate(&finaldate);
    } else {
        printf("Invalid date entered. Please check the input.\n");
    }

    return 0;
}

