f=open('python\\smaple.txt','w')
f=open('python\\smaple.txt','a')
with open('python\\smaple.txt','w') as f:
    a=f.write("me")#No need to write the close statement in with statement as it is by default
print(a)
# f.write("PLease run the prograam tghis time\n")
# f.write("I am appending")
f.close()