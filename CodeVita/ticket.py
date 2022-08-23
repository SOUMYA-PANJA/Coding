n = int(input())
lst = []
for i in range(n):
    j = list(input())
    lst.append(j)
g = input().split(',')

dt = {}
l = len(g)
p = 1
for i in range(int(l/2), l):
    dt[p] = int(g[i])
    p += 1
for i in range(int(l/2)-1, -1, -1):
    dt[p] = int(g[i])
    p += 1
space = []
for i in range(0, n):
    space.append(lst[i].count('_'))

for prio, num in dt.items():
    c = 0
    k = num
    while((c < n) and (space[c] < num)):
        c += 1
        
    if(c >= n):
        continue
    
    for i in range(num):
        for j in range(len(lst[c])):
            if(lst[c][j] == '_'):
                lst[c][j] = prio
                k -= 1
                space[c] -= 1
            if(k <= 0):
                break

for i in lst:
    for j in i:
        print(j, end='')
    print()
