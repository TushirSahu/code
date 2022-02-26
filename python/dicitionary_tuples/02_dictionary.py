mydict={
    "fast":"In a quick manner",
    "tushir":"Cool boy",
    "marks":[10,25,30],
    "anotherrdict":{'harry':'coder'},
    1: 2
}
#Dictionary meyhods
print(mydict.keys())#prints in form of lists
print(type(mydict.keys())),
print(list(mydict.keys())),#prints the keys of dictionary
print(mydict.values())
print(mydict.items())#prints the (key,value) of the dictionary
print(mydict)
updatedict={
    "Lavish":"Friend",
    "Shubham":"competitor",
    "tushir":"guitarist"#updates the previous value
}
mydict.update(updatedict)#updates the dictionary by adding key-valuaes pairs from updatDict
print(mydict)
print(mydict.get('tushir'))#Prints value associated with tushir
print(mydict['tushir'])#Prints value associated with tushir

#difference betwewen [] and .get:
print(mydict.get('tushir2'))#this show none if it is not present
print(mydict['tushir2'])#throws an error as it is not present
 
