#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function declarations
void bubbleSort(int arr[], int n);
void selectionSort(int arr[], int n);
void swap(int arr[], int i, int j);
void displayArray(int arr[], int n);

int main() {
    printf("GIRISH\n");
    printf("________________________________-\n");

    // Input the size of the array
    printf("Enter the size of the array: ");
    int size;
    scanf("%d", &size);

    // Declare and initialize the array
    int arr[size];
    printf("________________________________-\n");

    // Generate random numbers and display the original array
    srand(time(NULL));
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 1000;
        printf("%d\t", arr[i]);
    }
    printf("\n");

    // Create copies of the array for different sorting algorithms
    int bubbleSortedArr[size];
    int selectionSortedArr[size];

    // Copy the original array to the new arrays
    for (int i = 0; i < size; i++) {
        bubbleSortedArr[i] = arr[i];
        selectionSortedArr[i] = arr[i];
    }

    // Perform bubble sort and display the sorted array
    bubbleSort(bubbleSortedArr, size);
    printf("Sorted array using Bubble Sort:\n");
    displayArray(bubbleSortedArr, size);

    // Perform selection sort and display the sorted array
    selectionSort(selectionSortedArr, size);
    printf("Sorted array using Selection Sort:\n");
    displayArray(selectionSortedArr, size);

    return 0;
}

// Bubble sort function
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr, j, j + 1);
            }
        }
    }
}

// Selection sort function
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr, i, minIndex);
    }
}

// Function for swapping
void swap(int arr[], int i, int j) {
    if (i != j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

// Display the array
void displayArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}
