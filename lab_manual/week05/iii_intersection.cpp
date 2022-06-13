#include<bits/stdc++.h>
using namespace std;

void printIntersection(int arr1[], int size1, int arr2[], int size2){
    int i=0, j=0;
    while(i<size1 and j<size2){
        if(arr1[i]<arr2[j]) i++;
        else if(arr1[i]>arr2[j]) j++;
        else {
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }
    }
}

int main()
{
    int size1,size2;
    cin>>size1;
    int arr1[size1];
    for(int i=0; i<size1; i++) cin>>arr1[i];
    cin>>size2;
    int arr2[size2];
    for(int i=0; i<size2; i++) cin>>arr2[i];
    printIntersection(arr1, size1, arr2, size2);
    return 0;
}