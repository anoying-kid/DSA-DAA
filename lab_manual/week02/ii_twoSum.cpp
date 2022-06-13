#include<bits/stdc++.h>
using namespace std;

void twoSum(int arr[], int size){
    int notFound = 1;
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            for(int k=j+1; k<size; k++){
                if (arr[i]+arr[j]==arr[k]){
                    cout<<arr[i]<<","<<arr[j]<<","<<arr[k];
                    notFound=0;
                }
            }
        }
    }
    if(notFound) cout<<"No sequence found.";
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
        twoSum(arr, size);
    }
    return 0;
}