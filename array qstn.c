#include <stdio.h>

int main() {
    int size;

    // Get the size of the array from the user
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Check if the size is non-negative
    if (size <= 0) {
        printf("Invalid array size. Exiting the program.\n");
        return 1; // Return an error code
    }

    int array[size];

    // Get the elements of the array from the user
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    // Reverse the array
    int temp;
    for (int i = 0, j = size - 1; i < j; i++, j--) {
        // Swap elements at positions i and j
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }

    // Display the reversed array
    printf("\nReversed Array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    return 0; // Return success
}
