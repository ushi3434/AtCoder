N = int(input())

for i in range(N):
    if(i != N - 1):
        print(N - i, end=",")
    else:
        print(N - i, end="")
    