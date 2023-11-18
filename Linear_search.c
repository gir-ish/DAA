#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function declaration
int linearSearch(int arr[], int n, int target);

int main() {
    int n, target;
    printf("GIRISH\n500109971\n");
    printf("enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    
    // Sorted array
    srand(time(NULL));
    arr[0] = rand() % 1000; // first element random generation
    printf("%d\t", arr[0]);

    for (int i = 1; i < n; i++) {
        // For sorted array, increment of the previous element
        arr[i] = arr[i - 1] + rand() % 100;
        printf("%d\t", arr[i]);
    }
    printf("\n");

    printf("enter the element to search for: ");
    scanf("%d", &target);

    int result = linearSearch(arr, n, target);
    
    if (result != -1) {
        printf("element %d at index %d\n", target, result);
    } else {
        printf("element %d not in array\n", target);
    }

    return 0;
}

// Linear search function
int linearSearch(int arr[], int n, int target) {
    int i = 0;
    while (i < n && arr[i] != target) {
        i++;
    }

    if (i < n) {
        return i; // Target index
    } else {
        return -1; // Target is not in the array
    }
}
