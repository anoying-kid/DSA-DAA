# Bubble Sort

* Compares two adjacent elements and swaps them until they are not in the intended order.
* Just like air bubble in water.

## Code
---
### Python

[Bubble sort](./bubble_sort.py)
```python
def bubble_sort(ls: list):
    for i in range(len(ls)-1):
        for j in range(len(ls)-i-1):
            if ls[j]>ls[j+1]:
                ls[j],ls[j+1]=ls[j+1],ls[j]
    return ls
ls = [2,1,212,24341,12,9,122]
print(bubble_sort(ls))
```
[Optimized bubble sort](./optimized_bubble_sort.py)
```python
def bubble_sort(ls: list):
    for i in range(len(ls)-1):
        swapped= False
        for j in range(len(ls)-i-1):
            if ls[j]>ls[j+1]:
                ls[j],ls[j+1]=ls[j+1],ls[j]
                swapped= True
        if not swapped:
            break
    return ls

ls = [2,1,212,24341,12,9,122]
print(bubble_sort(ls))
```

### C

[Bubble sort](./bubble_sort.c)
```C
#include<stdio.h>
void bubbleSort(int arr[], int size){
    int temp;
    for (int i=0; i<size-1; i++){
        for (int j=0; j<size-i-1; j++){
            if(arr[j]>arr[j+1]){
                // arr[i]= arr[i] + arr[i+1];
                // arr[i+1]= arr[i] -arr[i+1];
                // arr[i]= arr[i]-arr[i+1];
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

int main()
{
    int arr[]={2,1,212,24341,12,9,122};
    int size= sizeof(arr)/sizeof(int);
    bubbleSort(arr, size);
    for(int i=0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}
```

[Optimized bubble sort](./optimized_bubble_sort.c)
```C
#include<stdio.h>
void bubbleSort(int arr[], int size){
    int temp;
    for (int i=0; i<size-1; i++){
        int swapped=0;

        for (int j=0; j<size-i-1; j++){
            if(arr[j]>arr[j+1]){
                // arr[i]= arr[i] + arr[i+1];
                // arr[i+1]= arr[i] -arr[i+1];
                // arr[i]= arr[i]-arr[i+1];
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swapped= 1;
            }
        }
        if(swapped==0){
            break;
        }
    }
}

int main()
{
    int arr[]={2,1,212,24341,12,9,122};
    int size= sizeof(arr)/sizeof(int);
    bubbleSort(arr, size);
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
so on.

    complexity
    =(n-1)+(n-2)+(n-3)+...+1
    =1+2+3+...+(n-2)+(n-1
    =n*(n-1)/2
    =(n*2 - n)/2
    =O(n*2)

| Time complexity |         | When                  |
|-----------------|---------|-----------------------|
| Best | O(n)  | If the array is already sorted     |
| Worst| O(n*2)| If the array is in descending order|
| Avg  | O(n*2)| It occurs when the elements of the array are in jumbled order (neither ascending nor descending).|