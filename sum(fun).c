#include <stdio.h>

void add_without_arg_and_return() {
    int a, b, sum;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("Sum: %d\n", sum);
}

int main() {
    add_without_arg_and_return();
    return 0;
}
