if __name__ == "__main__":
    for __ in range(0, int(input())):
        n = int(input())
        x_co, y_co = [], []
        x_count, y_count = {}, {}
        for i in range(4*n-1):
            num1, num2 = map(int, input().split())
            x_co.append(num1)
            y_co.append(num2)
            if y_co[i] not in y_count.keys():
                y_count[y_co[i]] = 1
            else:
                y_count[y_co[i]] = y_count[y_co[i]] + 1

            if x_co[i] not in x_count.keys():
                x_count[x_co[i]] = 1
            else:
                x_count[x_co[i]] = x_count[x_co[i]] + 1

        for key, val in x_count.items():
            if val % 2 != 0:
                x_ans = key
        for key, val in y_count.items():
            if val % 2 != 0:
                y_ans = key
        print(x_ans, y_ans)
