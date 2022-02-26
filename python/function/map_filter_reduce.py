from functools import reduce
lst=[1,2,4,5,6,7,8,9]
evens=list(filter(lambda n:n%2==0, lst))#no with true condition are printed
doubles=list(map(lambda n:n*2, evens))#changes everythign present in list
print(evens)
print(doubles)

sum=reduce(lambda a,b:a+b,doubles)#gives the sum of the elements of list
print(sum)