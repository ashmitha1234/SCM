def even(a):
    if a%2==0:
        print(a, "is a even number")
    else:
        print(a, "is a odd number")
def prime(a):
    if a<=1:
        print(a," is not a prime number")
    else:
        for i in range(2,a):
            if a%i==0:
                print(a," is not a prime number")
                break
        else:
            print(a," is a prime number")
a=int(input("Enter a number : "))
even(a)
prime(a)

