phone=input('Phone\n')
digits={
    "1":'one',
    "2":'two',
    "3":'three',
    "4":'four'
}
output=""
for ch in phone:
    output+=digits.get(ch,"!")+" "
print(output)