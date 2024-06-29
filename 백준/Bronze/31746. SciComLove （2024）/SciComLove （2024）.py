def get_reversed_string(N):
    original_string = "SciComLove"
    if N % 2 == 1:
        return original_string[::-1]
    else:
        return original_string

# Example usage:
N = int(input().strip())
result = get_reversed_string(N)
print(result)
