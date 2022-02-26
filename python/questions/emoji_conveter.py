message=input(">\n")
x=message.split(" ")
emojis={
    ":[":"☹️",
    ":/":'😕',
    ":|":'😐'
}
output=""
for word in x:
    output+=emojis.get(word,word)+" "
print(output)