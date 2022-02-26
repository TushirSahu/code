def Uppercase(lst):
    
   return [ i.upper() for i in lst]


lst=["Tushir","Sahu"]
print(Uppercase(lst))

def sorting(ls):
    pos=[]
    neg=[]
    for i in ls:
     if(i<0):
      neg.append(i)
    else:
        pos.append(i)
    print(neg)
    print(pos)


A=[-1,-3,6,7]
sorting(A)
