#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int l, int r, int key)
{
    while(l<=r){
        int m = (l + r)/2;

        if (arr[m]==key) return m;
        if (arr[m]<key) l = m+1;
        else r = m-1;
    }
    return -1;
}


int main()
{
    int arr[] = {1,2,3,4,5,6};
    int key = 2;
    int size = sizeof(arr)/sizeof(arr[0]);
    int count = binarySearch(arr, 0, size-1, key);
    (count==-1)
    ? cout<<"Element is not present."
    : cout<<"Element is present at "<<count;
    return 0;
}