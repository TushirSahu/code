fruits=['Banana','Strawberry','Cherry','Watermelon']
for item in fruits:
    print(item)

for i in range(1,8):
    print(i)
for j in range(2,15,2):
    print(j)
else:
    print("Done")#when condition becomes false else is excueted

for k in range(10):
    print(k)
    if(k==5):
     break#terminates the loop here only
else:#breaking of loop does not means it is false.and 
    #else is only excueted when loop is false
    print("Done")
for y in range(1,8):
    if(y%2==0):
        continue#anything below this continue is not excueted and loop goes fir next step
    print(y)

r=10
if r>0:
    pass#do nothing (null statement)
print('Hello World')