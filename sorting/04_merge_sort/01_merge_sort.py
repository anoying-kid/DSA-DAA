def mergeSort(arr):
    if len(arr)>1:
        r = len(arr)//2
        F = arr[:r]
        L = arr[r:]

        mergeSort(F)
        mergeSort(L)

        i=j=k=0

        while i<len(F) and j<len(L):
            if (F[i]<L[j]):
                arr[k] = F[i]
                i+=1
            else:
                arr[k] = L[j]
                j+=1
            k+=1

        while i<len(F):
            arr[k] = F[i]
            i+=1
            k+=1
        
        while j<len(L):
            arr[k] = L[j]
            j+=1
            k+=1
    return arr
    
if __name__ == '__main__':
    arr = [2,1,231443,12,12441414,14]
    print(arr)
    arr = mergeSort(arr)
    print(arr)