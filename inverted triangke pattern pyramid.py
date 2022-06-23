n=int(input("Enter a number"))
i=0
while i<n:
    sp=0
    while sp<=i:
        print(" ",end="")
        sp+=1
    st=0
    while st<n-i:
        print("*",end=" ")
        st+=1
    i+=1
    print()
