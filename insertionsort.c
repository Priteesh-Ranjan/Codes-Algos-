#include<stdio.h>
void insertionSort(int arr[], int size)
{
    int j;
    for(int i = 1; i < size; i++)
    {
        int temp = arr[i];
        j = i - 1;

        while (j >= 0 & arr[j]>temp)
        {
            arr[j+1] = arr[j];
            j--;

        }
    arr[j+1] = temp;
    }
}

int main()
{
    int arr[] = {5,7,10,9,6};
    int size = sizeof(arr)/sizeof(arr[0]);

    //getting the given array
    
    printf("Orignal array is: ");
    for(int i = 0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }

    //getting the sorted array
    insertionSort(arr, size);
    printf("\nSorted array is: ");
    for(int i = 0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}