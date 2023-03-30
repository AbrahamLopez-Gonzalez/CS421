# include<stdio.h>

int main() {
        int a = 125, b = 12345;
        long ax = 1234567890;
        short s = 4043;
        float x = 2.13459;
        double dx = 1.1415927;
        char c = 'W';
        unsigned long ux = 2541567890;
        
        int r1 = a + c;
        int r2 = x + c;
        int r3 = dx + x;
        int r4 = ((int) dx) + ax;
        int r5 = a + x;
        int r6 = s + b;
        int r7 = ax +b;
        int r8 = s + c;
        int r9 = ax + c;
        unsigned long r10 = ax + ux;

        printf("a + c = %d", r1);
        printf("\n");
        printf("x + c = %d", r2);
        printf("\n");
        printf("dx + x = %d", r3);
        printf("\n");
        printf("((int) dx) + x = %d", r4);
        printf("\n");
        printf("a + x = %d", r5);
        printf("\n");
        printf("s + b = %d", r6);
        printf("\n");
        printf("ax + b = %d", r7);
        printf("\n");
        printf("s + c = %d", r8);
        printf("\n");
        printf("ax + c = %d", r9);
        printf("\n");
        printf("ax + ux = %lu", r10);

        return 0;
}
