n = int(input())
p = n+1
for i in range(1, p):
    print("I", end=' ')
    if i % 2 == 0 and i != p-1:
        print("love that", end=' ')
    elif i % 2 == 0 and i == p-1:
        print("love it")
    elif i % 2 != 0 and i != p-1:
        print("hate that", end=' ')
    elif i % 2 != 0 and i == p-1:
        print("hate it")
