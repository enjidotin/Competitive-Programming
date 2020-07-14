if __name__ == "__main__":
    for _ in range(0, int(input())):
        num, x = map(int, input().split())
        a_list = list(map(int, input().split()))
        if a_list[0] <= x:
            print(num)
        else:
            cnt = 0
            while x < a_list[0]:
                cnt += 1
                x = x*2
            print(cnt+num)
