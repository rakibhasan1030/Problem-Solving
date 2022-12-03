if __name__ == '__main__':
    n = int(input())
    arr = list(map(int, input().split()))
    if n == len(arr):
        a = sorted(set(arr))
        print(a[len(a)-2])
    else:
        print(f"Length error : {n}")
