pizza={'crust':['thick','thin'],
'toppings':['mushroom','extra cheese'],
'category':['mageritha','ramen']


}
for k,v in pizza.items():
    print(f"{k.title()} types are:")
    for ve in v:
        print(f"-->{ve.title()}")


lst={'Tushir':"Gawar",
'Harsh':'Hello',
'Yash':'title'
}

for k,v in lst.items():
    print(list((k,v)))

res={**pizza,**lst}#merging two dictionaries
print(res)