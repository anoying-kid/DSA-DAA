#include<iostream>
using namespace std;

void merge(int arr[], int start, int mid, int end)
{
    int n1 = mid - start + 1;
    int n2 = end - mid;

    int F[n1], L[n2];

    for(int i=0; i<n1; i++){
        F[i] = arr[i+start];
    }
    for(int j=0; j<n2; j++){
        L[j] = arr[mid + j +1];
    }

    int i=0, j=0, k=start;

    while(i<n1 and j<n2){
        if(F[i]<L[j]){
            arr[k] = F[i];
            i++;
        }
        else{
            arr[k] = L[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        arr[k] = F[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k] = L[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int start, int end){
    if(start<end)
    {
        int mid = start + (end - start)/2;
        mergeSort(arr, start, mid);
        mergeSort(arr, mid+1, end);
        merge(arr, start, mid, end);
    }
}

void printArray(int arr[], int size){
    for(int i = 0; i< size; i++){
        cout<<arr[i]<<' ';
    }
    cout<<'\n';
}

int main()
{
    int arr[] = {2,32,12213,2,131,213};
    int size = sizeof(arr)/sizeof(arr[1]);
    printArray(arr, size);
    mergeSort(arr, 0, size-1);
    printArray(arr, size);
    return 0;
}