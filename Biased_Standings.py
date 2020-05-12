def ranks():
    space=input()
    n=int(input())
    l=[]
    for i in range(n):
        trash,x=input().split()
        l.append(int(x))
    l.sort()
    result=0
    for i in range(n):
        result+=abs(i+1-l[i])
    print(result)
t=int(input())
for loop in range(t):
    ranks()
