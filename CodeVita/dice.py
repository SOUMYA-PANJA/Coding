def findWays(N, T):
    dp = [0] * (N + 1);
    dp[0] = 1
    for i in range(1, N + 1):
        dp[i] = 0
        for j in range(1, T+1):
            if (i - j >= 0):
                dp[i] = dp[i] + dp[i - j]
    print(dp[N])

t = int(input())
S = []
T = []
for i in range(t):
    m = input().split()
    S.append(int(m[0]))
    T.append(int(m[1]))
for i in range(t):
    findWays(S[i], T[i])