#include<stdio.h>

void printArray(int *arr, int n) {
    printf("Entered Array elements are: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);  // Added a space between elements for readability
    }
    printf("\n");
}

int linearSearch(int *arr, int n, int item) {
    for(int i = 0; i < n; i++) {
        if (arr[i] == item) {
            return i;  // Return the index where the item is found
        }
    }
    return -1;  // Return -1 if the item is not found
}

int main() {
    int arr[100], i, n, item, res;
    
    // Get the size of the array
    printf("Enter the array size: ");
    scanf("%d", &n);
    
    // Get the array elements
    printf("Enter the array elements:\n");
    for(i = 0; i < n; i++) {
        printf("Enter element[%d]: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    // Print the array
    printArray(arr, n);

    // Get the item to search
    printf("Enter the Element to search: ");
    scanf("%d", &item);
    
    // Perform linear search
    res = linearSearch(arr, n, item);

    // Check the result and print the appropriate message
    if(res != -1) {
        printf("Element found at position: %d\n", res + 1);  // Print 1-based index
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;
}
