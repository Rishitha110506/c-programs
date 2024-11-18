#include <stdio.h>

long long factorial(int n);

int main() {
    int num;
    long long result;

    
    printf("Enter a number to find its factorial: ");
    scanf("%d", &num);

   
    if (num < 0) {
        printf("Factorial of a negative number is undefined.\n");
        return 1;
    }

   
    result = factorial(num);

    
    printf("The factorial of %d is %lld.\n", num, result);

    return 0;
}


long long factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
