/*Write a C program that prompts the user to input a series of integers until the user stops entering 0 using a while loop. Calculate and print the sum of all the positive integers entered.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	int input, sum=0;
	printf("Enter integers for summing up, Enter 0 to stop\n");
	while(input!=0) {
		scanf("%d",&input);
		sum+=input;
	}
	printf("Sum of all integers: %d",sum);
	return 0;
}


