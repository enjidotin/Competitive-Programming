import math
try:
    k = input()
    t = input()
    T = int(t)
    while(T):
        num = int(input())
        l = [pow(i, 1) for i in range(1, num+1)]
        s = ""
        num1, num2 = 0, 0
        for i in l[::-1]:
            if((abs(num1+i-num2)) < (abs(num2+i-num1))):
                num1 += i
                s += "1"
            else:
                num2 += i
                s += "0"
        print(abs(num1-num2))
        print(s[::-1])
        T -= 1
except:
    pass
