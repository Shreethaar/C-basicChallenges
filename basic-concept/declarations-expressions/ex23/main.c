/* Write a C program that reads three floating-point values and checks if it is possible to make a triangle with them. Determine the perimeter of the triangle if the given values are valid.*/

#include <stdio.h>

int main() {
	float x,y,z,P,A;

	printf("Input the first number:");
	scanf("%f",&x);
	printf("Input the second number:");
	scanf("%f",&y);
	printf("Input the third number:");
	scanf("%f",&z);
	
	if(x < (y+z) && y < (x+z) && z < (y+x)) {
		P = x+y+z;
		printf("Perimeter=%.2f\n",P);
	}
	else {
		printf("Not possible to create triangle");
	}
	return 0;
}

