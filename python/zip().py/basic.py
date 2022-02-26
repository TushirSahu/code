names=["tushir",'Harsh','Karan']
roll_no=[11,34,5]

# for i,(names,roll_no) in enumerate(zip(names,roll_no)):
#     print(i,list((names,roll_no)))


mapped=zip(names,roll_no)
print(list(mapped))

# c,v=zip(*mapped)#Unzipping the mapped
# print("c=",c)
# print('v=',v)
