# a=45
# #1.if-elif-else ladder
# if(a>3):
#     print("The given number is greater than 3")
# elif(a>7):
#     print("The given number is greater than 7")
# elif(a>13):
#     print("The given number is greater than 7")
# else:
#     print("The given number ius greater than 3 or 7")        

a=8
if(a>3):
    print("The given number is greater than 3")

if(a>7):
    print("The given number is greater than 7")

if(a>13):
    print("The given number is greater than 7")    
else:
    print("The given number ius greater than 3 or 7")  

age=int(input("Enter your age: "))
if(age>18 and age<69):
    print('You can work with us')
else:
    print("No")

if(age>18 or age<69):
    print('You can work with us')
else:
    print('sorry')    

b=None
if(b is None):
    print('Yes')
else:
    print('No')


c=[56,7,8,]
if(56 in c):
    print("yes")
else:
    print('No')