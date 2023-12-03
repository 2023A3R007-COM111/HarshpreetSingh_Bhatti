//Demonstrating the program for printing the marks of the students of two batches.
#include<stdio.h>
int main()
{
	int batch1, batch2;
	float Rahul_marks, Ram_marks;
//Getting the data from user.
	printf("Enter the number of units for batch 1: ");
	scanf("%d", &batch1);
	printf("Enter the number of units for batch 2: ");
	scanf("%d", &batch2);

	printf("Enter the marks of Rahul: ");
	scanf("%f", &Rahul_marks);
	printf("Enter the marks of Ram: ");
	scanf("%f", &Ram_marks);
//Printing the output statemnets.
	printf("\nNumber for batch 1: %d\n", batch1);
	printf("\nNumber for batch 2: %d\n", batch2);
	printf("\nMarks of Rahul: %.2f\n", Rahul_marks);
	printf("\nMarks of Ram: %.2f\n", Ram_marks);
	return 0;
}