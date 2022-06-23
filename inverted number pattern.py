n=int(input("Enter a number:"))
i=1
while i<=n:
    s=0
    while s<=n-i:
        print(" ",end="")
        s+=1

    j=0
    while j<i:
        print("*",end="")
        j+=1
    i+=1
    print()
