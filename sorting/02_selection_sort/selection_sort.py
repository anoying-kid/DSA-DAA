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