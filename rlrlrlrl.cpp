#include <stdio.h>
 
void mergeSort(int *, int, int);
void merge(int *, int, int, int);
 
int main() {
    int arr[8] = {4, 6, 1, 9, 5, 3, 0, 2};
    int dataNum = 8;
    int i;
 
    printf("before sorting: ");
    for (i=0; i<dataNum; i++)
        printf("%d " , arr[i]);
    printf("\n");
    mergeSort(arr, 0, dataNum - 1);
    printf("after sorting: ");
    for (i=0; i<dataNum; i++)
        printf("%d " , arr[i]);
    printf("\n");
 
    return 0;
}
 
void mergeSort(int *arr, int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;
 
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}
 
void merge(int *arr, int low, int mid, int high) {
    int leftIndex = low;
    int rightIndex = mid + 1;
    int tempArrLength = high - low + 1;
    int tempArr[tempArrLength];
    int tempIndex = 0;
 
    while (leftIndex <= mid && rightIndex <= high) {
        if (arr[leftIndex] <= arr[rightIndex]) {
            tempArr[tempIndex] = arr[leftIndex];
            leftIndex++;
        }
        else {
            tempArr[tempIndex] = arr[rightIndex];
            rightIndex++;
        }
        tempIndex++;
    }
    if (leftIndex > mid) {
        while (rightIndex <= high) {
            tempArr[tempIndex] = arr[rightIndex];
            rightIndex++;
            tempIndex++;
        }
    }
    else {
        while (leftIndex <= mid) {
            tempArr[tempIndex] = arr[leftIndex];
            leftIndex++;
            tempIndex++;
        }
    }
    leftIndex = low;
    for (tempIndex=0; tempIndex<tempArrLength; tempIndex++) {
        arr[leftIndex] = tempArr[tempIndex];
        leftIndex++;
    }
}
