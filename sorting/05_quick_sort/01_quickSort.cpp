#include<iostream>
using namespace std;

void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low-1);

    for(int j= low; j<high; j++)
    {
        if(arr[j]<=pivot){
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i+1], &arr[high]);
    return (i+1);
}

void quickSort(int arr[], int low, int high)
{
    if(high>low)
    {
        int pivot = partition(arr, low, high);
        quickSort(arr, low, pivot-1);
        quickSort(arr, pivot+1, high);
    }
}

int main()
{
    int arr[]={2,1,212,24341,12,9,122};
    int size= sizeof(arr)/sizeof(int);
    quickSort(arr, 0, size-1);
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<' ';
    }
    return 0;
}