#include<iostream>
using namespace std;

void jumpSearch(int arr[], int size, int key){
    int count=0, run=0, i=0;
    while(i<size){
        if(arr[i]==key) {run=1; break;}
        count++;
        i+=2;
    }
    if(run) cout<<"Present "<<i;
    else cout<<"Not present "<<count;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    int key;
    cin>>key;
    jumpSearch(arr, n, key);
    return 0;
}