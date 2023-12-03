//Program to find the maximum and minimum of the numbers.
#include <stdio.h>
int main()
{
	int num1, num2;
//Asking the user for input.
	printf("Enter num1: ");
	scanf("%d", &num1);

	printf("Enter num2: ");
	scanf("%d", &num2);
//Checking various statements using else if ladder.
	if(num1>num2){
		printf("%d is greater than %d.", num1, num2);
	}else if(num1 == num2){
		printf("%d(num1) is equals to %d(num2).", num1, num2);
	}else{
		printf("%d is greater than %d.", num2, num1);
	}
	printf("\n");
    return 0;
}