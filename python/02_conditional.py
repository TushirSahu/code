comment=input("Enter your comment: ")
if("make a lot money" in comment):
    spam=True
elif("buy now" in comment ):
    spam=True
elif("click this" in comment ):
    spam=True
elif("subscribe this" in comment ):
    spam=True
else:
    spam=False

if(spam):
    print("This text is spam")
else:
    print("This text is not spam")   


names=['tushir','shobhit','anil']
name=input()
if name in names:
    print("your name is present")
else:
    print("invalid")

t='harry'
q=input("Enter a string")  

if(t in q) :
    print("Yes")
else:
    print("No")