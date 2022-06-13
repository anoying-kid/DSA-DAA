#include<bits/stdc++.h>
using namespace std;
int cnt =0;
void merge(int arr[], int l, int m, int h){
    int n1 = m - l + 1;
    int n2 = h - m;
    int F[n1], L[n2];
    for(int i=0; i<n1; i++) F[i]=arr[l+i];
    for(int j=0; j<n2; j++) L[j]=arr[m+1+j];

    int i=0,j=0,k=l;
    while(i<n1 and j<n2){
        cnt++;
        if(F[i]<=L[j]){
            arr[k] = F[i];
            i++;
        } else {
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

void mergeSort(int arr[], int l, int h){
    if (l<h){
        int m = l +(h-l)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, h);
        merge(arr, l, m, h);
    }
}

int main()
{
    int size;
    cin>>size;
    int arr[size];
    for(int i=0; i<size; i++) cin>>arr[i];
    // merge sort complexity if O(nlogn)
    mergeSort(arr, 0, size-1);
    cout<<cnt<<endl;
    for(auto i: arr) cout<<i<<" ";
    return 0;
}