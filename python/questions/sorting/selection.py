a=[64,25,12,22,11]
for i in range(len(a)):
    min_inx=i
    for j in range(i+1,len(a)):
        if(a[min_inx]>a[j]):
            min_inx=j
    a[i],a[min_inx]=a[min_inx],a[i]


print(a)
        
