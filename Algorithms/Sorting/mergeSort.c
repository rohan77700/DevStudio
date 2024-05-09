// Merge Sort
// Time calculation

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void merge(int arr[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];

    for(i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for(j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    i = 0, j = 0, k = l;

    while(i < n1 && j < n2) {
        if(L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while(i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while(j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r) {
    if(l < r) {
        int mid = l + (r - l) / 2;

        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);

        merge(arr, l, mid, r);
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
    mergeSort(array, 0, size-1);
    end = clock();

    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

    printf("Sorted array: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\nTime required: %f seconds\n", cpu_time_used);

    return 0;
}