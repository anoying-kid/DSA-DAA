#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int m, int h){
    int n1=m-l+1;
    int n2=h-m;
    int F[n1],L[n2];
    for(int i=0; i<n1; i++) F[i]=arr[l+i];
    for(int j=0; j<n2; j++) L[j]=arr[m+j+1];
    int i=0,j=0,k=l;
    while(i<n1 and j<n2){
        if(F[i]<L[j]){
            arr[k]=F[i];
            i++;
        } else {
            arr[k]=L[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        arr[k]=F[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k]=L[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int h){
    if(l<h){
        int m = l+(h-l)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, h);
        merge(arr, l, m, h);
    }
}

int binarySearch(int arr[], int low, int high, int key){
    if(low<=high){
        int mid = low + (high-low)/2;
        
        if(arr[mid]==key) return mid;
        if(arr[mid]>key) return binarySearch(arr, low, mid-1, key);
        return binarySearch(arr, mid+1, high, key);
    }
    return -1;
}

void pairKey(int arr[], int size, int sum){
    // merge sort complexity O(nlogn)
    mergeSort(arr, 0, size-1);

    // loop complexity 0(n)
    for(int i=0; i<size; i++){

        // binarySearch complexity O(nlogn)
        int key = binarySearch(arr, 0, size-1, sum-arr[i]);
        if(key!=-1) {
            cout<<arr[i]<<" "<<arr[key];
            return ;
        }
    }
    cout<<"No such element exist.";
}
int main()
{
    int size;
    cin>>size;
    int arr[size];
    for(int i=0; i<size; i++) cin>>arr[i];
    int sum;
    cin>>sum;
    pairKey(arr, size, sum);
    return 0;
}