#include <stdio.h>
#include <stdlib.h>

void printArray(int *arr, int size) 
{
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() 
{
    int *arr1, *arr2, *arr3;
    int size1 = 5, size2 = 3, newSize = 8;


    arr1 = (int *)malloc(size1 * sizeof(int));
    if (arr1 == NULL) {
        fprintf(stderr, "Memory allocation failed for arr1.\n");
        return 1;
    }


    printf("Initial arr1: ");
    for (int i = 0; i < size1; i++) 
    {
        arr1[i] = i + 1;
    }
    printArray(arr1, size1);

    arr2 = (int *)calloc(size2, sizeof(int));
    if (arr2 == NULL) 
    {
        fprintf(stderr, "Memory allocation failed for arr2.\n");
        free(arr1);
        return 1;
    }
    printf("Initial arr2: ");
    printArray(arr2, size2);
    arr3 = (int *)realloc(arr1, newSize * sizeof(int));
    if (arr3 == NULL) 
    {
        fprintf(stderr, "Memory reallocation failed for arr3.\n");
        free(arr1);
        free(arr2);
        return 1;
    }
    printf("Resized arr3: ");
    for (int i = size1; i < newSize; i++) 
    {
        arr3[i] = i + 1;
    }
    printArray(arr3, newSize);
    free(arr2);
    free(arr3);

    return 0;
}
