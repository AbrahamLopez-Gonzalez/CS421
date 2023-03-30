/*Write a C program that initializes a double array of size 3.
 * The program should populate the array with 3 values from the
 * user. Then the program should provide the average of these values.*/

# include <stdio.h>
# include <stdlib.h>

int main() {
	int j;
	double i, sum;
	double array[3];
	char holder[50];

	for (j = 0; j < 3; j++){
		fgets (holder, 50, stdin);
		i = atof (holder);
		printf("Enter a number: %g\n", i);
		array[j] = i;
	}
	
	printf("The array is [");
	for (j = 0; j < 3; j++){
		sum += array[j];
		if (j == 2){
			printf("%.2f", array[j]);
		} else {
			printf("%.2f, ", array[j]);
		}
	}
	printf("].\n");
	printf("The average of the array values is %.2f.", sum /= 3);

	return 0;
}
