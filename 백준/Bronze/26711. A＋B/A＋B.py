def addStrings(num1, num2):
    i, j, carry, res = len(num1) - 1, len(num2) - 1, 0, []
    while i >= 0 or j >= 0 or carry:
        n1 = int(num1[i]) if i >= 0 else 0
        n2 = int(num2[j]) if j >= 0 else 0
        carry, curr = divmod(n1+n2+carry, 10)
        res.append(str(curr))
        i, j = i - 1, j - 1
    return ''.join(res[::-1])

def main():
    a = input()
    b = input()
    print(addStrings(a, b))

if __name__ == "__main__":
    main()
