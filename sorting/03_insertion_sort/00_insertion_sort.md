# Insertion Sort

* Insertion sort is a sorting algorithm that places an unsorted element at its suitable place in each iteration.

* Insertion sort works similarly as we sort cards in our hand in a card game.

## Code
---
### Python

[Insertion sort](./01_insertion.py)
```python
# Insertion sort in Python

def insertionSort(array):

    for step in range(1, len(array)):
        key = array[step]
        j = step - 1
        
        # Compare key with each element on the left of it until an element smaller than it is found
        # For descending order, change key<array[j] to key>array[j].        
        while j >= 0 and key < array[j]:
            array[j + 1] = array[j]
            j = j - 1
        
        # Place key at after the element just smaller than it.
        array[j + 1] = key


data = [2,1,212,24341,12,9,122]
insertionSort(data)
print('Sorted Array in Ascending Order:')
print(data)
```

### C

[Insertion sort](./01_insertion_sort.c)
```C
#include<stdio.h>

void insertionSort(int arr[], int size){
    for(int i=1; i<size; i++){
        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
int main()
{
    int arr[]={2,1,212,24341,12,9,122};
    int size= sizeof(arr)/sizeof(int);
    insertionSort(arr, size);
    for(int i=0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}
```

## Time complexity
* {2,1,212,24341,12,9,122}
* For the first iteration it will go (n-1).
    - {1,2,212,12,9,122,24341}
* For the second it will go (n-2).
    - {1,2,12,9,122,212,24341}

.<br>
.<br>

| Time complexity |         | When                  |
|-----------------|---------|-----------------------|
| Best | O(n)  | If the array is already sorted     |
| Worst| O(n<sup>2</sup>)| If the array is in descending order|
| Avg  | O(n<sup>2</sup>)| It occurs when the elements of the array are in jumbled order (neither ascending nor descending).|