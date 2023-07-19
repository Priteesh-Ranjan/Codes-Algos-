#include<stdio.h>

void selcsort(int arr[],  int size)
{
    for (int i = 0; i<size-1; i++)
    {
        // setting ith values as the minm value
        int mvI = i;

        // checking if the ith index is less than Minm Value Index(mvI)
        for (int j = i+1 ; j < size; j++)
        {
            if (arr[j] < arr[mvI])
            {
                // if the condition satisfies updating the min mval index
                mvI = j;
            }

        }
        // Swapping the ith index value with minimum Index Value
        int temp = arr[mvI];
        arr[mvI] = arr[i];
        arr[i] = temp;
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
    selcsort(arr, size);
    printf("\nSorted array is: ");
    for(int i = 0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}