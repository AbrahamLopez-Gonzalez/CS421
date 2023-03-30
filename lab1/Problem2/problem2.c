/*Write a C program that initializes an array of 5 double values
 * and sums this array. The values in the array should be 5, 8,
 * 10, 13, 19.*/

# include <stdio.h>

int main() {
        int i;
        double sum = 0;
        double array[] = {5, 8, 10, 13, 19};

        printf("The array is [");
        for (i = 0; i < 5; i++){
                sum += array[i];
                if (i == 4) {
                    printf("%.2f", array[i]);
                } else {
                    printf("%.2f, ", array[i]);
                }
        }
        printf("].\n");
        printf("The sum of the array is %.2f.\n", sum);
        return 0;
}
