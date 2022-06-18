#include<bits/stdc++.h>
using namespace std;

int comp=0, sw=0;

int partition(int arr[], int l, int h){
    int pi = arr[h];
    int i = l;

    for(int j=l; j<=h-1; j++){
        comp++;
        if (arr[j]<=pi){
            swap(arr[i], arr[j]);
            i++;
            sw++;
        }
    }
    swap(arr[i],arr[h]);
    sw++;
    return (i);
}
void quickSort(int arr[], int l, int h){
    if(l<h){
        int pi = partition(arr, l, h);
        quickSort(arr, l, pi-1);
        quickSort(arr, pi+1, h);
    }
}

int main()
{
    int size;
    cin>>size;
    int arr[size];
    for(int i=0; i<size; i++) cin>>arr[i];
    // merge sort complexity if O(nlogn)
    quickSort(arr, 0, size-1);
    for(auto i: arr) cout<<i<<" ";
    cout<<"\n"<<comp<<" "<<sw;
    return 0;
}