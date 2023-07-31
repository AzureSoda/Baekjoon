import sys

def print_set(set):
    print(len(set))
    for word in sorted(set):
        print(word)

def main():
    n, m = map(int, sys.stdin.readline().split())

    heard = set()
    for i in range(n):
        heard.add(sys.stdin.readline().strip())

    both = set()
    for i in range(m):
        name = sys.stdin.readline().strip()
        if name in heard:
            both.add(name)

    print_set(both)

if __name__ == "__main__":
    main()
