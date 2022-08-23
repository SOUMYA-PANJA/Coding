def gcd(a, b):
    if(b == 0):
        return a
    return gcd(b, a%b)

def isprime(a):
    if(a == 1):
        return True
    elif(a == 2 or a == 3):
        return True
    elif(a%2 == 0 or a%3 == 0):
        return False
    i = 5
    while(i*i<a):
        if(a%i == 0 or a%(i+2) == 0):
            return False
        i += 6
    return True

def lcm(a, b):
    return (a*b)/gcd(a,b)

a = input().split()
a = [int(i) for i in a]

min = min(a)
res = 1
a.remove(min)
for i in a:
    res = lcm(res, i)
res = int(res)
i = 1
while(i*res < 10*10):
    if(isprime(min+res*i)):
        print(res*i+min)
        
        break
    i+=1
else:
    print("None")