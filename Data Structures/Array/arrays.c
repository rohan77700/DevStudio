// Arrays
// Index ->     0   1   2   3   4
// Value ->     10  20  30  40  50

#include <stdio.h>

// Insertion to array
void insertion(int arr[], int num, int pos, int *length) {
    if(pos <= 0 || pos > *length+1) {
        printf("Invaild position\n");
    }
    else {
        for(int i = *length-1; i >= pos-1; i--) {
            arr[i+1] = arr[i];
        }
        arr[pos-1] = num;
        (*length)++;
    }
}

// Deletion from array
void deletion(int arr[], int pos, int *length) {
    if(pos <= 0 || pos > *length) {
        printf("Invaild position\n");
    }
    else {
        for(int i = pos-1; i < *length-1; i++) {
            arr[i] = arr[i+1];
        }
        (*length)--;
    }
}

int main() {
    int size, num, pos;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];
    
    printf("Enter %d elements: \n", size);
    for(int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    // Traversal
    printf("The elements of the array are: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Insertion with position
    printf("Enter data you want to insert: ");
    scanf("%d", &num);

    printf("Enter the position: ");
    scanf("%d", &pos);
    
    insertion(array, num ,pos, &size);

    printf("The elements after insertion array are: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Deletion from position
    printf("Which position you want to delete: ");
    scanf("%d", &pos);

    deletion(array, pos, &size);

    printf("The elements after deletion array are: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}