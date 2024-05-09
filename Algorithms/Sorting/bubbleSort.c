// Bubble Sort
// Time calculation

#include <stdio.h>
#include <time.h>

void bubbleSort(int arr[], int length) {
    for(int i = 0; i < length-1; i++) {
        for(int j = 0; j < length-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int size;

    printf("Enter the size of elements: ");
    scanf("%d", &size);

    int array[size];
    
    printf("Enter %d elements: \n", size);
    for(int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    clock_t start, end;
    double cpu_time_used;

    start = clock();
    bubbleSort(array, size);
    end = clock();

    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

    printf("Sorted array: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\nTime required: %f seconds\n", cpu_time_used);

    return 0;
}