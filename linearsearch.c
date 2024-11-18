#include <stdio.h>


int linearSearch(int arr[], int n, int key);

int main() {
    int n, i, key, result;

    
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to be searched: ");
    scanf("%d", &key);

   
    result = linearSearch(arr, n, key);

    
    if (result != -1) {
        printf("Element found at index %d.\n", result);
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;
}

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;  
        }
    }
    return -1;  
}
