def multiply(A, B):
    C = [0] * (len(A) + len(B) + 1)
    for i in range(len(A)):
        for j in range(len(B)):
            C[i+j] += A[i] * B[j]
    for i in range(len(C) - 1):
        if C[i] >= 10:
            C[i+1] += C[i] // 10
            C[i] %= 10
    while len(C) > 1 and C[-1] == 0:
        C.pop(-1)
    return C

len_A, len_B = map(int, input().split())
A = list(map(int, reversed(input().strip())))
B = list(map(int, reversed(input().strip())))

C = multiply(A, B)
for i in reversed(C):
    print(i, end="")
