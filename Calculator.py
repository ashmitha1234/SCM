a=int(input("Enetr first number"))
b=int(input("Enter second number"))
print("Choose an operator(+, -, *, /, %")
op=input()
if(op=='+'):
    print("Result = ", a+b)
elif(op=='-'):
    print("Result = ", a-b)
elif(op=='*'):
    print("Result = ", a*b)
elif(op=='/'):
    print("Result = ", a/b)
elif(op=='%'):
    print("Result = ", a%b)
else:
    print("Invalid input")
