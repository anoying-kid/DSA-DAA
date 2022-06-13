#include<bits/stdc++.h>
using namespace std;

int sub(int arr[], int size, int k){
    int count=0;
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if (abs(arr[i]-arr[j])==k) count++;
        }
    }
    return count;
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
        int num;
        cin>>num;
        cout<<sub(arr, size, num);
    }
    return 0;
}