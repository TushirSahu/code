import os
old="python\oldname.txt"
new="python\sample.txt"
with open(old) as f:
    content=f.read()
with open(new,'w') as f:
    f.write(content)
os.remove(old)