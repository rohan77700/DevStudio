// Selection Sort
// Time calculation

#include <stdio.h>
#include <time.h>

void selectionSort(int arr[], int length) {
    for(int i = 0; i < length-1; i++) {
        int min_pos = i;
        for(int j = i + 1; j < length; j++) {
            if(arr[j] < arr[min_pos]) {
                min_pos = j; 
            }
        }
        if(min_pos != i) {
            int temp = arr[i];
            arr[i] = arr[min_pos];
            arr[min_pos] = temp;
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
    selectionSort(array, size);
    end = clock();

    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

    printf("Sorted array: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\nTime required: %f seconds\n", cpu_time_used);

    return 0;
}