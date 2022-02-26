def gen_list():
    lst=list()
    for i in range(1,11):
        lst.append((i,i**2,i**3))
    return lst

i=gen_list()
print(i)
