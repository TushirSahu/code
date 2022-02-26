def convert(n):
    items=[s for s in n.split('-')]
    items.sort()
    m='-'.join(items)
    return m

s='a-b-f-b-c'
print(convert(s))