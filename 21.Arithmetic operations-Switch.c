//Demonstrarting the use of swtich statements for Arthimetic operations of user choice.
#include <stdio.h>
int main()
{
  int choice, num1, num2, result;
//Choice Menu for user.
	printf("Select an arithmetic operation from following:");
	printf("\n 1. Addition.");
	printf("\n 2. Subtraction.");
	printf("\n 3. Multiplication.");
	printf("\n 4. Division.");
	printf("\n: ");
//Asking for user input.
	scanf("%d", &choice);

	printf("\nEnter two number: ");
	scanf("%d %d", &num1, &num2);
//Using Swtich statement , implementing the user choice and corresponding arithimetic operation.
	switch (choice)
  {
		case 1:
			result = num1 + num2;
			break;
		case 2:
			result = num1 - num2;
			break;
		case 3:
			result = num1 * num2;
			break;
		case 4:
			result = num1 / num2;
			break;
		default:
			printf("\nEnter a Valid Number!\n");
	}
//Printing the result.
	printf("\nResult: %d\n", result);
	return 0;

}