// Binary Search
// Time calculation

#include <stdio.h>
#include <time.h>

int binary_search(int arr[], int a, int b, int c) {
    int mid = (a + b) / 2;
    if(arr[mid] == c)
        return mid;
    else if(arr[mid] > c)
        return binary_search(arr, a, mid - 1, c);
    else
        return binary_search(arr, mid + 1, b, c);
}

int main() {
    int array[100];
    int n = 100;
    int search_ele = 75;

    for(int i = 0; i < n; i++) {
        array[i] = i;
    }

    printf("Initial Array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    clock_t start, end;
    double cpu_time_used;

    start = clock();
    int searched = binary_search(array, 0, n - 1, search_ele);
    end = clock();

    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

    if(searched != -1) {
        printf("\nElement found at index: %d\n", searched);
    } else {
        printf("\nElement not found\n");
    }
    
    printf("\nTime required: %f seconds\n", cpu_time_used);

    return 0;
}