if __name__ == '__main__':
    details = []
    for _ in range(int(input())):
        name = input()
        score = float(input())
        details.append([score, name])
    print("\n")
    print(details)

    first_min = min(details)
    for i in details:
        if i[0] == first_min[0]:
            details.remove(i)

    print("\n")
    print(f"first_min = {first_min}")

    print("\n")
    print(details)

    res = []
    second_min = min(details)

    print("\n")
    print(f"second_min = {second_min}")

    print("\n")
    print(details)

    for i in details:
        if i[0] == second_min[0]:
            res.append(i[1])
    res.sort()
    for i in res:
        print(i)
