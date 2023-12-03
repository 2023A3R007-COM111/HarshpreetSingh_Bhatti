//Demonstrarting the use of define function.
#include <stdio.h> 
#define PI 3.14159265359 
int main() 
{ 
    int radius=21;
	int areacircle;

    areacircle = PI * radius * radius; 

	printf("Area of Circle of radius %d: %d", radius, areacircle); 

	return 0; 
}
