n = int(input())
numbers = list(map(int, input().split()))

print((n * (n + 1) >> 1) - sum(numbers))