// Quick Sort
// Time calculation

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp; 
}

int partition(int arr[], int low, int high) {
    int pivot = arr[low];
    int i = low;
    int j = high;

    while(i < j) {
        while(arr[i] <= pivot) {
            i++;
        }
        while(arr[j] > pivot) {
            j--;
        }
        if(i < j) {
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[low], &arr[j]);

    return j;    
}

void quickSort(int arr[], int low, int high) {
    if(low < high) {
        int pivot_index = partition(arr, low, high);

        quickSort(arr, low, pivot_index - 1);
        quickSort(arr, pivot_index + 1, high);
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
    quickSort(array, 0, size-1);
    end = clock();

    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

    printf("Sorted array: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\nTime required: %f seconds\n", cpu_time_used);

    return 0;
}