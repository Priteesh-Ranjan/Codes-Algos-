#include<stdio.h>
// Input array is divided in two parts and comppared to form two seprate soted arrays.
void merge(int arr[], int mid, int lb , int ub){
    int i,j,k,B[ub];
    i = lb ;
    j = mid + 1;
    k = lb;
    // Compairing ith element of array with mjth element of other array.
    while(i<=mid && j<=ub){
        if (arr[i] <= arr[j]){
            B[k] = arr[i];
            i++;
            k++;
        }
        else{
            B[k] = arr[j];
            j++;
            k++;
        }
    }
    // If first array is left copying the first array to the B array.
    while(i <= mid){
        B[k] = arr[i];
        k++;
        i++;
        
    }
    // If Second array is left copying the first array to the B array.
    while(j <= ub){
        B[k] = arr[j];
        k++;
        j++;
    }

    // Now making the final single arr with these two arrays.
    for(int i = lb; i<= ub; i++){
        arr[i] = B[i];
    }
    
}

// Here we are recusively dividing the Array in Two halfs until we are left with single element which will always be sorted
void mergesort(int arr[], int lb , int ub){
    int mid;
    if(lb < ub ){
        mid = (lb + ub)/2;
        mergesort(arr,lb,mid);
        mergesort(arr,mid+1,ub);
        // Recursively calling the merge two sort and cocatenate all the arrays.
        merge(arr, mid, lb ,ub);

    }
}

int main() {
    int arr[] = {5, 3, 4, 7, 11, 35, 8, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    mergesort(arr, 0, size - 1 );
    
    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");

    return 0;
}

