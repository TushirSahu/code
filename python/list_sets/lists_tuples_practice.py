from math import trunc
from pickle import TRUE


lst=["tushir","rohit","lavish","gavish"]

lst.insert(0,"kavya")
lst.sort(reverse=True)#sorts in decreasing order
print(lst)

copy_lst=lst[:]
print(copy_lst)

tuples=("tushir","gavish","yash")
for ki in tuples[:2]:
    print(f"the name of the player is {ki.title()}")


tuple_copy=tuples[:]
print(tuple_copy)

