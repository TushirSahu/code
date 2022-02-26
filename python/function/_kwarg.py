def details(name,**data):
#  print(name)
 
 print(name)
 for i,j in data.items():
     print(i+':'+j)

details('tushroi',age=str(19),city='bhopal',mob=str(94132354))


detail={
    'name':"Tushir",
    'age': '19'
}
print(detail.items())
