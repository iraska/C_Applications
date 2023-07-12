#include <stdio.h>
#include <stdlib.h>

void FindRepeatingElements(int arr[], int size) 
{
    int* hash_table = (int*)calloc(size, sizeof(int));
    int i;

    for (i = 0; i < size; i++) {
        hash_table[arr[i]]++;
    }

    printf("Repetitive elements: ");
    for (i = 0; i < size; i++) {
        if (hash_table[i] > 1) {
            printf("%d ", i);
        }
    }

    free(hash_table);
}

int main() 
{
    int arr[] = { 2, 3, 4, 2, 5, 6, 7, 3, 5 };
    int size = sizeof(arr) / sizeof(arr[0]);

    FindRepeatingElements(arr, size);

    return 0;
}