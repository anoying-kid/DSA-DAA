def bubble_sort(ls: list):
    for i in range(len(ls)-1):
        for j in range(len(ls)-i-1):
            if ls[j]>ls[j+1]:
                ls[j],ls[j+1]=ls[j+1],ls[j]
    return ls
ls = [2,1,212,24341,12,9,122]
print(bubble_sort(ls))