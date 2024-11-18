#include<stdio.h>
int power(int base, int exponent);

int main() {
    int base, exponent, result;
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);

    result = power(base, exponent);

    printf("%d raised to the power of %d is %d\n", base, exponent, result);

    return 0;
}

int power(int base, int exponent)
{
    int result=1;
    if (exponent < 0) 
    {
        printf("Negative exponents not supported in this function.\n");
        return -1; 
    }

    for (int i = 0; i < exponent; i++)
 {
        result *= base;
    }

    return result;
}