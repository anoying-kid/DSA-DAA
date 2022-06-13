#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int size ){
    int comp =0, shifts=0;
    for(int i=0; i<size-1; i++){
        int min = i;
        for(int j=i+1; j<size; j++){
            if(arr[min]>arr[i]) min=i;
            comp++;
        }
        swap(arr[i], arr[min]);
        shifts++;
    }
    cout<<comp<<" "<<shifts<<endl;
    for(int i=0; i<size; i++) cout<<i<<" ";
}

int main()
{
    int size;
    cin>>size;
    int arr[size];
    for(int i=0; i<size; i++) cin>>arr[i];
    selectionSort(arr, size);
    // for(auto i: arr) cout<<i<<" ";
    return 0;
}