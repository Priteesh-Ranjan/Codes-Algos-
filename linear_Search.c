#include<stdio.h>
int linearSearch(int arr[], int size,int target){
    for(int i = 0; i<size; i++){
        if (arr[i] == target)
        return i;
    }
    return -1;
}

int main(){
    int arr[] = {1,55,6,77,6,3,8,4,9,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target = 4;

    int index = linearSearch(arr, size, target);

    printf("The orignal array is: ");
    for (int i = 0; i<size; i++){
        printf("%d ",arr[i]);
    }
    

    if (index != -1) {
        printf("\nTarget %d found at index %d\n", target, index);
    } else {
        printf("\nTarget %d not found in the array.\n", target);
    }
    return 0;


}