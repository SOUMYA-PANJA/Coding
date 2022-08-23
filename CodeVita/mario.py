def calc(c, R, l):
    co = 0
    ca = 0
    for i in range(R):
        if(l[R-i-1][c] == 'C'):
            co += 1
            ca = i
    return co, ca

def H(c, R, l):
    Cx = 0
    for i in range(1,R):
        if((l[R-i-1][c] == 'O') and (l[R-i][c] == 'H')):
            Cx = 1
            return Cx


R,C = input().split()
R = int(R)
C = int(C)

l = []
for i in range(R):
    l.append(list(input()))

cal = 0
coin = 0
i = 0
while(i < C):
    if(l[R-1][i] == 'O'):
        i+=1
        continue
    if(i == C):
        break
    x, y = calc(i, R, l)
    print(x,y)
    coin += x
    cal += (2*y)
    x = 2*H(i, R, l)
    print(x)
    cal += x
    i+=1

print(coin, cal)