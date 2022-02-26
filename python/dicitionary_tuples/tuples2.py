result=divmod(17,4)
t=(8,6)
print(divmod(*t))
print(result)

x=(1,2,3,4,5,6,7)
y=(8,9,*x)
y=(8,9,x)
print(y)

tt=(1,2,3,4,4,5,6,7)
for index ,n in enumerate(tt):#prints element index along with the element
    print(index,n)

lst=['Sudha','Nishi','gargi',('Tushir',),('Taru',),'Taashi']
boy=0
girl=0
for ele in lst:
    if isinstance(ele,tuple):
        boy+=1
    else:
        girl+=1

print(f"Boys={boy} Girls={girl}")