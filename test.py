t=int(input(" "))
while t>0:
    t=t-1
    x=int(input(""))
    y=int(input(""))
    z=int(input(""))
    if (x>y & x<z) | x>z & x<y:
        print(x)
    elif (y>x & y<z) | (y>z & y<x):
        print(y)
    else:
        print(z)
    
        