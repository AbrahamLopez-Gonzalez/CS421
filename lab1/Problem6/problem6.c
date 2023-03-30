#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int rsize = 0;
    char size[50];
    double i, temp;
    double arr[3];
    char holder[50];
    
    printf("How many values to sort (<100)? ");
    fgets(size, 50, stdin);
    rsize = atoi (size);
    
    if (rsize > 99){
        printf("This is out of bounds!!!\n");
        printf("Try again.");
        return 0;
    }
    
    for (int j = 0; j < rsize; j++){
        printf("\nEnter a number: ");
        fgets(holder, 50, stdin);
        i = atof (holder);
        arr[j] = i;
        printf("%g", i);
    }
    
    for (int k = 0; k < rsize - 1; k++){
        for (int l = 0; l < rsize - k - 1; l++){
            if (arr[l] > arr[l + 1]){
                temp = arr[l];
                arr[l] = arr[l + 1];
                arr[l + 1] = temp;
            }
        }
    }
    
    printf("\nThe sorted numbers are: ");
    for (int j = 0; j < rsize; j++){
        printf("%.0f ", arr[j]);
    }
    printf("\n");
    
    return 0;
}
