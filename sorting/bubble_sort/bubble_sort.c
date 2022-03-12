#include<stdio.h>
void bubbleSort(int arr[], int size){
    int temp;
    for (int i=0; i<size-1; i++){
        for (int j=0; j<size-i-1; j++){
            if(arr[j]>arr[j+1]){
                // arr[i]= arr[i] + arr[i+1];
                // arr[i+1]= arr[i] -arr[i+1];
                // arr[i]= arr[i]-arr[i+1];
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

int main()
{
    int arr[]={2,1,212,24341,12,9,122};
    int size= sizeof(arr)/sizeof(int);
    bubbleSort(arr, size);
    for(int i=0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}