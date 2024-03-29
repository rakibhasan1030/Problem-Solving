# Problem : Finding the percentage (https://www.hackerrank.com/challenges/finding-the-percentage/problem)

if __name__ == '__main__':
    try:
        n = int(input())
    except Exception as e:
        exit()

    if (n >= 2 and n <= 10):
        student_marks = {}
        for _ in range(n):
            name, *line = input().split()
            scores = list(map(float, line))
            if (len(scores) == 3):
                for mark in scores:
                    if (mark >= 0.0 and mark <= 100.0):
                        continue
                    else:
                        exit()
                student_marks[name] = scores
            else:
                exit()

        def avrg_marks(name):
            marks = student_marks[name]
            a = 0
            for i in marks:
                a += i
            res = a/3
            # formate (value, ".2f")
            print(format(res, ".2f"))

        query_name = input()
        avrg_marks(query_name)
