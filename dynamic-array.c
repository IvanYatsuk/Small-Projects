#include <stdio.h>
#include <stdlib.h>

int main() {
    int *dynamicArray; // Declare a pointer to an array
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    dynamicArray = (int *)malloc(size * sizeof(int));

    if (dynamicArray == NULL) { 
        printf("Error! Unable to allocate memory.\n");
        return 1;
    }

    // Initialize the elements of the array
    for (int i = 0; i < size; i++) {
        dynamicArray[i] = i * 10;
    }

    // Print the elements of the array
    printf("Array elements:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", dynamicArray[i]);
    }
    printf("\n");
    free(dynamicArray);

    return 0;
}
