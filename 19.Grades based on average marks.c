//Program for definf the grade of the student based on his/her marks.
#include <stdio.h>
int main()
{
	//Asking the user for student marks.
	printf("Enter Students Marks (0-100): ");
	int avgmarks;

	scanf("%d", &avgmarks);
	//Using nested if else defining the grades.
	if (avgmarks <= 100){
		if (avgmarks <= 80){
			if (avgmarks <= 60){
				if (avgmarks <= 40){
					if (avgmarks <= 20){
						printf("F: Student Failed.");
					}else{
						printf("D3: Student archived Division 1.");
					}
				}else{
					printf("D2: Student archived Division 1.");
				}
			}else{
				printf("D1: Student archived Division 1.");
			}

		}else{
			printf("H: Student archived Honours Grade.");
		}
	}else{
		printf("Enter a valid number!");
	}
	printf("\n");
	return 0;
}