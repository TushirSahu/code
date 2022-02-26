#import array as arr
from array import*
vals=array('i',[5,8,9,4,2])
vals.reverse()#reverse the array
newArr=array(vals.typecode,(a*a for a in vals))#making copy of vals so a before for takes the initial value in vals
print(vals)
print(newArr,end="\n")
print(vals[0])
for i in range(len(vals)):#more dynamic
    print(vals[i])
for e in vals:#best method
        print(e)
print(vals.buffer_info())#this function gives (address,size) of array
