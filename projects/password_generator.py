import random

print("Welcome to password generator\n")

cha='abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ!@#$%^&*()_+.,0123456789'
number=int(input("Enter the number of passwords you want to generate\n"))
length=int(input("Enter the length of each password\n"))

print("Here are your passwords\n")
for x in range(number):
    password=''
    for y in range(length):
        
        password+=random.choice(cha)
    print(password)
