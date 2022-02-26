t=int(input())
i=11
for i in reversed(range(1,12)):
    print(f"{t} X {i} = {t*i}")
    
# l=["Harry","Sohan","Tushir","Sachin"]
# for name in l:
#     if name.startswith("S"):
#         print("Hello",name)


# num=int(input())
# flag=True
# for i in range(2,num):
#     if(num%2==0):
#         flag=False
#         break
# if(flag==False)  :
#     print("This number is not prime") 
# else:
#     print("The number entered is prime")    

#Sum of n natural  numbers using while loop
# x=int(input())
# sum=0
# i=1
# while(i<=x):
#     sum=sum+i
#     i=i+1
# print(sum)

# z=int(input())
# j=1
# fact=1
# while(j<=z):
#     fact=fact*j
#     j=j+1
# print(fact)

# star=int(input())
# for i in range(5):
#     print("*"*(i+1))


# n=int(input())
# for i in range(n):
#     print(" "*(n-i-1),end="")
#     print("*"*(2*i+1),end="")
#     print(" "*(n-i-1))

m=3
for k in range(3):
    for l in range(3):
        if k == 0 or k == m - 1 or l == 0 or l == m - 1:
            print('*', end='')
        else:
            print(' ', end='')
    print()
