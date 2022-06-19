#include<bits/stdc++.h>
using namespace std;

//way 01
// void repeat(int arr[], int size, int num){
    // int i=0, count=0;
    // while(i<size and arr[i]!=num){
    //     i++;
    // }
    // while(i<size and arr[i]==num){
    //     count++;
    //     i++;
    // }
    // cout<<count;
// }

// way 02
// int largest_index_smaller_than_target(int arr[] , int size , int num){
//     int ans = -1;
//     int low = 0 , high = size - 1;
//     while(low <= high) {
//         int mid = (low + high)/2;
//         if(arr[mid] >= num) {
//             high = mid - 1;
//         } else {
//             ans = mid;
//             low = mid + 1;
//         }
//     }
//     return ans;
// }
// int smallest_index_larger_than_target(int arr[] , int size, int num){
//     int ans = size;
//     int low = 0 , high = size - 1;
//     while(low <= high){
//         int mid = (low + high)/2;
//         if(arr[mid] <= num) {
//             low = mid + 1;
//         } else {
//             ans = mid;
//             high = mid - 1;
//         }
//     }
//     return ans;
// }

// shorting way 02
int repeatIndex(int arr[], int size, int key, int searchFirst){
    int ans = -1;
    int low = 0, high = size-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==key){
            ans=mid;
            if(searchFirst){
                high=mid-1;
            } else {
                low=mid+1;
            }
        }
        else if(arr[mid]<key){
            low=mid+1;
        }
        else {
            high=mid-1;
        }
    }
    return ans;
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
        int key;
        cin>>key;
        // int index1 = largest_index_smaller_than_target(arr, size, num);
        // int index2 = smallest_index_larger_than_target(arr , size,num);
        // int repeat = index2 - index1 -1;
        // if(repeat){
        //     cout<<key<<"-"<<repeat;
        // } else {
        //     cout<<"Key not present.";
        // }
        int index1 = repeatIndex(arr, size, key, 1);
        int index2 = repeatIndex(arr, size, key, 0);
        int repeat = index2-index1+1;
        if(index1!=-1){
            cout<<key<<" - "<<repeat;
        } else {
            cout<<"Key not present";
        }
    }
    return 0;
}

// 1 2 2 3 4

// > 2, largest index with value less than 2
// < 2, smallest index with value greater than 2 