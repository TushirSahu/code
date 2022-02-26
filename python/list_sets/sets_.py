a={1,2,4,6,1}
print(type(a))
print(a)

#This syntax will create empty dictionary not a empty set
a={}
print(type(a))

##Method to create an empty set
b=set()
print(type(b))

##Adding values to empty set
b.add(4)
b.add(4)
b.add(54)
#b.add([1,2,3,4,54])#Lists and dictionary cannot be added in a set
b.add((1,2,3,4,54))#tupples can be added in a set
print(b)

##Printing the length of set
print(len(b))

##removal of an item from a set
b.remove((54))
print(b)

#removes any random element of a set
print(b.pop())
print(b)
print(b.clear())


