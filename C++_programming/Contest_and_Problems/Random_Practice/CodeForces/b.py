def maxSum(n):
    ans = 1
    while n % 2 == 0:
        n = n / 2
        ans *= 2
    for i in range(3, int(n ** 0.5) + 1, 2):
        while n % i == 0:
            n = n / i
            ans *= i
    if n > 2:
        ans *= n
    return ans

t = int(input().strip())
for _ in range(t):
    n = int(input().strip())
    print(maxSum(n))
