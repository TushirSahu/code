# num1=int(input("Enter num1 "))
# num2=int(input("Enter num2 "))
# num3=int(input("Enter num3 "))
# num4=int(input("Enter num4 "))
# if(num1>num4):
#     f1=num1
# else:
#     f1=num4
# if(num2>num3):
#     f2=num2
# else:
#     f2=num3
# if(f1>f2):
#     print(str(f1)+" is greatest")
# else:
#     print(str(f2)+" is greatest")


mark1=int(input("Enter the marks1 "))
mark2=int(input("Enter the marks2 "))
mark3=int(input("Enter the marks3 "))

if(mark1<33 or mark2<33 or mark3<33):
    print('You are fail')

elif((mark1+mark2+mark3)/3 <40):
    print('You are failed due to total percent less than 40')
else:
    print("you passed the")