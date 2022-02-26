#Use open function to read a content of a file
f=open('python\\tush.txt','r')
f=open('python\\tush.txt')#by default mode is r
data=f.read(5) #Reads uptill 5 characters
print(data)
f.close()