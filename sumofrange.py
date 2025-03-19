def sum_(x):
    sum_=0
    for i in range(1,x+1):
        sum_+=i
    return sum_
    
x=int(input("Enter a number : "))
sum_=sum_(x)
print("Sum = ", sum_)

