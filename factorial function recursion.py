def factorial(n):
    fact=1
    while n>0:
        fact=fact*n
        n-=1
        print(fact)

n=int(input("Enter a number:"))
print(factorial(n))
