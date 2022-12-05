if __name__ == '__main__':
    details = []
    for _ in range(int(input())):
        name = input()
        score = float(input())
        details.append([score, name])

    first_min = min(details)

    newDetails = [i for i in details if i[0] != first_min[0]]

    second_min = min(newDetails)

    res = sorted([i[1] for i in newDetails if i[0] == second_min[0]])
    [print(i) for i in res]