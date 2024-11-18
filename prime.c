#include <stdio.h>
#include <stdbool.h>


bool isPrime(int n);

int main() {
    int num;

    
    printf("Enter a number to check if it is prime: ");
    scanf("%d", &num);

    
    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}


bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
