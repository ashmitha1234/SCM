num=int(input("Enter a number : "))
def fact(num):
    if num==0:
        print("factorial of 0 is 1")
    else: 
        fact=1
        i=1
        while(i<num):
            fact*=i
            i+=1
        print("factorial of ",num, " is ",fact)

fact(num)

