#include<stdio.h>

// Function to print the array
void printArray(int *arr, int n) {
    int i;
    printf("\nArray elements are: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Binary Search Function
int binarySearch(int *arr, int n, int item) {
    int beg = 0, end = n - 1, mid, loc = -1;
    
    while(beg <= end) {
        mid = (beg + end) / 2;  // Calculate mid index
        
        if(arr[mid] == item) {   // If item is found
            loc = mid + 1;       // Return 1-based index
            break;
        }
        else if(arr[mid] > item) { // If item is smaller than mid element
            end = mid - 1;
        }
        else {                    // If item is larger than mid element
            beg = mid + 1;
        }
    }
    return loc;  // Return -1 if item not found
}

int main() {
    int arr[100], i, n, item, res;

    // Get number of elements in the array
    printf("Enter the number of the elements: ");
    scanf("%d", &n);
    
    // Get the sorted array elements
    printf("Enter the array elements in sorted order: \n");
    for(i = 0; i < n; i++) {
        printf("Enter the element[%d]: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    // Print the array
    printArray(arr, n);

    // Get the item to search
    printf("Enter the item to be searched: ");
    scanf("%d", &item);
    
    // Perform binary search
    res = binarySearch(arr, n, item);
    
    // Print the result
    if(res == -1) {
        printf("Item not found!\n");
    }
    else {
        printf("Item found at position: %d\n", res);
    }
    
    return 0;
}
