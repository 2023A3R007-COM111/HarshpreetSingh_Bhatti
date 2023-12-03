//Demonstrating a program for largest of the three inputs taken from user.
#include <stdio.h>
int main()
{//Deamanding the three inputs from the user.
    int input1, input2, input3;
	printf("Enter input1: \n");
	scanf("%d", &input1);
	printf("Enter input2 : \n");
	scanf("%d", &input2);
	printf("Enter input3: \n");
	scanf("%d", &input3);
//Defining the various conditions using nested if else.
	if (input1 >= input2){
		if (input1 >= input3){
			printf("\nInput1 is the largest of all three inputs.");
		} else {
			printf("\ninput3 is the largest of all three inputs.");
		}
	} else {
		if (input2 >= input3){
			printf("\nInput 2  is Largest of all three.");
		} else {
			printf("\ninput3 is Largest of all three.");
		}
	}
	printf("\n");

	return 0;
}