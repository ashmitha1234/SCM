my_set={123,4556,4546,3095,2344,34}
max_=0
for e in my_set:
    if(e>max_):
        max_=e
print(f"Maximum number : {max_}")
min_=max_
for e in my_set:
    if(e<min_):
        min_=e
print(f"Minimum number : {min_}")

