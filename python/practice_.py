name=input("Enter your name\n")
# print('Good Afternoon,'+name)
letter='''Dear <|NAME|>
You are Selected!
Date:<|DATE|>'''
name=input("Enter your name\n")
date=input("Enter date\n")
letter=letter.replace('<|NAME|>',name)
letter=letter.replace('<|DATE|>',date)
print(letter)

st="This is to detect   double spaces"
doublespaces=st.find("   ")
print(doublespaces)