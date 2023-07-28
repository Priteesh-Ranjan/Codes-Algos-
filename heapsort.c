#include<stdio.h>

// Creating a heapify Function
void heapify(int arr[], int size, int root){
    // Defining the largest element as root
    int largest = root;
    // Defining the left and right child
    int left  = 2 * root + 1;
    int right = 2 * root + 2;

    // checking if left child exist and if greater than right child and upadating
    if ((left < size) && (arr[left] > arr[largest]))
        largest = left;
    
    // checking if right child exist and if greater than left child and upadating
    if ((right < size) && (arr[right] > arr[largest]))
        largest = right;
    
    // Swapping if largest is grater than root
    if(largest != root){
        int temp = arr[root];
        arr[root] = arr[largest];
        arr[largest] = temp;

        heapify(arr, size, largest);
    }
}

void heapsort(int arr[],int size){
    for (int i = size / 2 - 1; i >= 0; i--){
        heapify(arr, size, i);
    }

    for(int i = size - 1; i > 0 ; i--){
        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;

        heapify(arr,i,0);
    }
}
int main() {
    int arr[] = {5, 3, 255, 564, 684, 9, 89, 99, 8, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    heapsort(arr, size);

    printf("\nSorted array: ");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    printf("\n");

    return 0;
}