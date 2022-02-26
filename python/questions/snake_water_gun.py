import random

def gamewin(comp,you):
    
    if comp==you:
        print("Tied")
    elif comp=='s':
        if you=='g':
            print("You win")
        elif you=='w':
            print("you Lose")
    elif comp=='g':
        if you=='w':
            print("You win")
        elif you=='s':
            print("you Lose")
    elif comp=='g':
        if you=='s':
            print("You win")
        elif you=='w':
            print("you Lose")

print("Comp turn: Snake(s) Water(w) or Gun(g)")
randno=random.randint(1, 3)
if(randno==1):
    z='s'
elif randno==2:
    z='w'
elif randno==3:
    z='g'


you=input(("Your turn: Snake(s) Water(w) or Gun(g)\n"))

print("Computer chose",z)
print("You chose",you)
gamewin(z,you)