#include<stdio.h>
// Creating a function bubblesort which takes two values as array and size of array
void bubblesort( int arr[], int size)
{
    // Iterating through the sorting loop until all the elements in the array are sorted 
    for (int i = 0; i<size-1; i++)
    {
        // Looping through for checking if next element in array is smaller than previous element
        for (int j = 0 ; j<size-1; j++ )
        {
            if (arr[j+1] < arr[j])
            {
                // Swaping the elements of array 
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp ;
            }
        }

    }

}

// writing the function to show input as well as output
int main()
{
    int arr[] = {5,4,7,9,1};
    int size  = sizeof(arr)/sizeof(arr[0]);

    printf("Orignal array: ");
    for(int i=0 ; i<size ; i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\n");
    // calling the function to executing sorting algorithm
    bubblesort(arr,size);

    // getting the output
    printf("Sorted Array: ");
    for(int i=0 ; i<size ; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}