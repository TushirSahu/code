# with open("python\log.txt") as f:
#    content= f.read()
# if 'python' in content.lower():#converts everything in lower case and read in that form
#     print("Python is present") 
# else: 
#   print("Python is not present")
 

content=True
i=1
with open("python\log.txt") as f:
    while content:
     content=f.readline()
     if 'python' in content.lower():
        print(content)
        print(f"Python is present {i}") 
     i+=1