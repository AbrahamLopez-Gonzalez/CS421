/*Initialize two double arrays of size 3 and other of size 6. It should populate each of the size 3 arrays with values from the user. It should then merge these size 3 arrays into the size 6 array.*/

#include <stdio.h>
#include <stdlib.h>
void print1();
void print2();

int main(){
    int k = 0, l = 1;
    double i, sum;
    double firstarr[3], secondarr[3], finalarr[6];
    char holder[50];

    print1();

    for (int j = 0; j < 3; j++){
        printf("Enter a number: ");
        fgets(holder, 50, stdin);
        i = atof (holder);
        firstarr[j] = i;
        printf("%g\n", i);
    }
    
    print2();

    for (int j = 0; j < 3; j++){
        printf("Enter a number: ");
        fgets(holder, 50, stdin);
        i = atof(holder);
        secondarr[j] = i;
        printf("%g\n", i);
    }
    
    for (int j = 0; j < 3; j++){
        finalarr[k] = firstarr[j];
        finalarr[l] = secondarr[j];
        k += 2;
        l += 2;
    }
    
    printf("The merged array is [%.2f, %.2f, %.2f, %.2f, %.2f, %.2f]."\
    , finalarr[0], finalarr[1], finalarr[2], finalarr[3], finalarr[4], finalarr[5]);

    return 0;
}

void print1() {
    printf("--------------------------------\n");
    printf("Enter the first array's values\n");
    printf("--------------------------------\n");
}

void print2() {
    printf("--------------------------------\n");
    printf("Enter the second array's values\n");
    printf("--------------------------------\n");
}
