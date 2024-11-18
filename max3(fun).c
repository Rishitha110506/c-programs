#include <stdio.h>


int find_maximum(int a, int b, int c);

int main() {
    int num1, num2, num3, max;

    
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    
    max = find_maximum(num1, num2, num3);

    
    printf("The maximum of %d, %d, and %d is %d.\n", num1, num2, num3, max);

    return 0;
}
int find_maximum(int a, int b, int c) {
    int max = a;  // Assume a is the largest initially
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    return max;
}
