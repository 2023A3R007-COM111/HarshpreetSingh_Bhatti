//Program for "Leap Year verifier".
#include <stdio.h>
int main()
{
	int Input;
  //Asking the user for Year number.
	printf("Enter the year number: ");
	scanf("%d", &Input);
//Giving the conditions for year to be a leap year.
	if ( (Input%4 == 0 && Input%100 != 0) || ( Input%400 == 0 ) )
    {
		printf("%d is a leap Year.\n", Input);
    }
    else
    {
        printf("%d is not a leap year.\n", Input);
    }
	return 0;
}