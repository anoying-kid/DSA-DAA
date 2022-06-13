#include<iostream>
using namespace std;

int present(int arr[], int num, int size){
    for(int i=0; i<size; i++){
        if (arr[i]==num) return i;
    }
    return -1;
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
        int temp;
        cin>>temp;
        int val = present(arr, temp, size);

        if(val==-1) cout<<"Not present "<<size;
        else cout<<"Present "<<val;
    }
    return 0;
}