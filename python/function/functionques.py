def max(num1,num2,num3):
    if(num1>num2):
        if(num1>num3):
         return num1
        else:
            return num3
    else:
        if(num3<num2):
            return num2
        else:
            return num3

def sum(num):
    if(num==1):
        return 1
    return num+sum(num-1)

m=max(3,2,234)
x=sum(4)

print('maximum number is',m)
print(x)

n=int(input())
for i in range(n):
    print("*"*(n-i))


def remove_strip(string,word):
    newstr=string.replace(word,"    ")
    return newstr.strip()

y="  HArry is good   "
z=remove_strip(y, "HArry")
print(z)


def table(num):
    for i in range(10):
        h=(num*i)
        return h

b=int(input())
print(table(b))