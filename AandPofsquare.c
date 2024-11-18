#include <stdio.h>


int find_area(int side);
int find_perimeter(int side);

int main() {
    int side, area, perimeter;

    
    printf("Enter the side length of the square: ");
    scanf("%d", &side);

    
    area = find_area(side);
    perimeter = find_perimeter(side);

    
    printf("Area of the square: %d\n", area);
    printf("Perimeter of the square: %d\n", perimeter);

    return 0;
}

int find_area(int side) {
    return side * side;
}


int find_perimeter(int side) {
    return 4 * side;
}
