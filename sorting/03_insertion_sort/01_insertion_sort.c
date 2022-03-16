#include<stdio.h>

void insertionSort(int arr[], int size){
    for(int i=1; i<size; i++){
        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
int main()
{
    int arr[]={2,1,212,24341,12,9,122};
    int size= sizeof(arr)/sizeof(int);
    insertionSort(arr, size);
    for(int i=0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}