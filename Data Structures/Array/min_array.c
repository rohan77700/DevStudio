// Find the Minimum Number in Array

#include <stdio.h>

int find_min(int arr[], int length) {
    int min = arr[0];
    for(int i = 1; i < length; i++) {
        printf("Checking array[%d] = %d\n", i, arr[i]);
        if(arr[i] < min) {
            min = arr[i];
            printf("New min found: %d\n", min);
        }
    }
    return min;
}

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];

    printf("Enter %d elements: \n", size);
    for(int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    int min = find_min(array, size);    
    printf("Minimum: %d\n", min);

    return 0;
}