test_str="GeeksforGeeks"

new_str=test_str.replace('e','')
print(new_str)

new_str1=test_str.replace('e','',1)#removes only first occurence of e
new_str2=test_str.replace('s','',2)#removes the 2 occurences of s that occurs first 2
print(new_str2)

lst=' '.join(test_str[i]for i in range(len(test_str)) if i!=2)
print(lst)