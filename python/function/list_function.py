def count(lst):
    y=0
    for i in lst:
        if len(i)>5:
            y=y+1
    return y
    

lst=["tushir","Tasshiu","Taru","mai","Gawar"]
ans=count(lst)
print(ans)