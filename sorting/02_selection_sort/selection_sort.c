#include<stdio.h>
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void selection_sort(int arr[], int size){
    for(int i=0; i<size; i++){
        int min_index = i;
        for(int j=i+1; j<size; j++){
            if (arr[i]>arr[j]){
                min_index=j;
            }
        }
        swap(&arr[i], &arr[min_index]);
    }
}

int main()
{
    int arr[]={2,1,212,24341,12,9,122};
    int size = sizeof(arr)/sizeof(int);
    selection_sort(arr, size);
    for(int i=0; i<size; i++)
    {
        printf("%d ",arr[i]);   
    }
    return 0;
}