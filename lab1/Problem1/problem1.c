/*Write a C program to convert a string to an integer.
You should output the inputted integer +5*/

# include <stdio.h>
# include <stdlib.h>

int main() {
	int i;
	char holder[50];
	
	fgets(holder, 50, stdin);
	i = atoi (holder);
	printf("Input an Integer: %d\n", i);
	i = atoi (holder) + 5;
	printf("Output: %d\n", i);
	
	return 0;
}
