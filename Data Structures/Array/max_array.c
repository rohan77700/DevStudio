// Find the Maximum Number in Array

#include <stdio.h>

int find_max(int arr[], int length) {
    int max = arr[0];
    for(int i = 1; i < length; i++) {
        printf("Checking array[%d] = %d\n", i, arr[i]);
        if(arr[i] > max) {
            max = arr[i];
            printf("New max found: %d\n", max);
        }
    }
    return max;
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

    int max = find_max(array, size);    
    printf("Maximum: %d\n", max);

    return 0;
}