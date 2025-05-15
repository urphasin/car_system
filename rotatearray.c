#include <stdio.h>

void rotateArrayRight(int arr[], int n, int k) {
    k = k % n; // Handle cases where k > n
    if (k == 0) return;

    int temp[k];
    
    // Store the last k elements in a temporary array
    for (int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    // Shift the rest of the array to the right
    for (int i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }

    // Copy the temporary array back to the beginning
    for (int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;

    printf("Original array: ");
    printArray(arr, n);

    rotateArrayRight(arr, n, k);

    printf("Array after rotating right by %d: ", k);
    printArray(arr, n);

    return 0;
}