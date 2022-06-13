#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int m, int h){
    int n1 = m - l +1;
    int n2 = h - m;

    int F[n1], L[n2];
    for(int i=0; i<n1; i++) F[i]=arr[l+i];
    for(int i=0; i<n2; i++) L[i]=arr[m+1+i];

    int i=0, j=0, k=l;

    while(i<n1 and j<n2){
        if (F[i]<=L[j]){
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
        int m = (l+h)/2;
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
    // now comparing complexity O(n)
    int dup = 0;
    for(int i=0; i<size-1; i++){
        if(arr[i]==arr[i+1]){
            dup = 1;
            break;
        }
    }
    for(auto i: arr) cout<<i<<" ";
    if(dup){
        cout<<"YES";
    } else {
        cout<<"NO";
    }
    return 0;
}