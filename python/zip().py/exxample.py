players=['Sachin','Tushir','Justin','Yash']
Scores=[100,15,45,1]
for i,(players,Scores) in enumerate(zip(players,Scores),1):
    print(f"{i}.Player: {players} Score: {Scores}")

dictt={
    1:"Tushri",
    2:"Sarthak",
    3:"Yash"

}
for i,(k,v) in enumerate(dictt.items()):
    print(f"{k}:{v}")