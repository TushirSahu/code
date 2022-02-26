from typing import Counter


lst={
1:'a',2:'b',3:"a",4:'b',5:'b'
}
res=Counter(lst.values())#checking the frequency of the values of the dictionary
print(dict(res))
print(list(res))#does not give the same output
print(set(res))#does not give the same output
