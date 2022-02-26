def average(marks):
    return (marks[0]+marks[1]+marks[2]+marks[3])/4

marks1=[76,89,76,87]
average1=average(marks1)
print(average1)

def greet(name):
    print("Good day,"+name)
def greet(name="Taru"):#default parameter value if not mention anything inside bracketsit takes this value
    print("Good day,"+name)
greet("Tushir")
greet()

def factorial(n):
    if n==0:
        return 1;
    return n*factorial(n-1)
n=int(input())
print(factorial(n))
