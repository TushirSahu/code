from array import*
arr=array('i',[])
val=int(input("Enter the size:\n "))
for i in range(val):
    x=int(input("Enter the value:\n"))
    arr.append(x)

print(arr)
k=int(input("Enter the number:\n"))
print(arr.index(k))#tells the index at which k is there
