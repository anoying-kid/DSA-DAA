#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int size){
    int shift=0, comp=0;
    for(int i=0; i<size; i++){
        int key = arr[i];
        int j = i -1;

        while(j>=0 and arr[j]>key){
            comp++;
            arr[j+1]=arr[j];
            shift++;
            j--;
        }
        arr[j+1] = key;
        shift++;
    }
    for(int i=0; i<size; i++) cout<<i<<" ";
    cout<<"\ncomparisons = "<<comp<<endl;
    // last element won't be shifted so one less will be there;
    cout<<"shifts = "<<shift-1<<endl;
}

int main()
{
    int N;
    cin>>N;
    while(N--){
        int size;
        cin>>size;
        int arr[size];
        for(int i=0; i<size; i++) cin>>arr[i];
        insertionSort(arr, size);
    }
    return 0;
}