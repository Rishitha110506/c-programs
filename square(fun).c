#include <stdio.h>


int square(int x);

int main() 
{
    int num, result;

  
    printf("Enter a number to find its square: ");
    scanf("%d", &num);

   
    result = square(num);

   
    printf("The square of %d is %d.\n", num, result);

    return 0;
}

int square(int x)
 {
    return x * x;
}
