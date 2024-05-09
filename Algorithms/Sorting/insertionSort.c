// Insertion Sort
// Time calculation

#include <stdio.h>
#include <time.h>

void insertionSort(int arr[], int length) {
    int i, j, key;
    for(i = 1; i < length; i++) {
        key = arr[i];
        j = i - 1;
        
        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
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
    insertionSort(array, size);
    end = clock();

    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

    printf("Sorted array: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\nTime required: %f seconds\n", cpu_time_used);

    return 0;
}