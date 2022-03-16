# Selection Sort 

Selection sort is a sorting algorithm that selects the smallest element from an unsorted list in each iteration and places that element at the beginning of the unsorted list.

## Code
---
## Python

[Selection Sort](./selection_sort.py)
```python
def selection_sort(ls: list):
    for i in range(len(ls)):
        min_index = i
        for j in range(i+1,len(ls)):
            if ls[min_index]>ls[j]:
                min_index= j
        ls[i],ls[min_index]=ls[min_index],ls[i]
    return ls

ls = [2,1,212,24341,12,9,122]
print(selection_sort(ls))
```

## C

[Selection Sort](./selection_sort.c)
```c
#include<stdio.h>
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void selection_sort(int arr[], int size){
    for(int i=0; i<size; i++){
        int min_index = i;
        for(int j=i+1; j<size; j++){
            if (arr[i]>arr[j]){
                min_index=j;
            }
        }
        swap(&arr[i], &arr[min_index]);
    }
}

int main()
{
    int arr[]={2,1,212,24341,12,9,122};
    int size = sizeof(arr)/sizeof(int);
    selection_sort(arr, size);
    for(int i=0; i<size; i++)
    {
        printf("%d ",arr[i]);   
    }
    return 0;
}
```

## Time Complexity

* {2,1,212,24341,12,9,122}
* For the first iteration it will go (n-1) i.e(start with i+1)
    - {1,2,212,24341,12,9,122}
* For the second it will go (n-2).
    - {1,2,212,24341,12,9,122}

.<br>
.<br>
so on.

    complexity
    =(n-1)+(n-2)+(n-3)+...+1
    =1+2+3+...+(n-2)+(n-1
    =n*(n-1)/2
    =(n*2 - n)/2
    =O(n*2)

| Time complexity |         | When                  |
|-----------------|---------|-----------------------|
| Best | O(n<sup>2</sup>)  | If the array is already sorted     |
| Worst| O(n<sup>2</sup>)| If the array is in descending order|
| Avg  | O(n<sup>2</sup>)| It occurs when the elements of the array are in jumbled order (neither ascending nor descending).|