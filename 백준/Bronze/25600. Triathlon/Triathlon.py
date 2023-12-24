N = int(input())
scores = []
for _ in range(N):
    a, d, g = map(int, input().split())
    if a == d + g:
        scores.append(a * (d + g) * 2)
    else:
        scores.append(a * (d + g))
print(max(scores))
