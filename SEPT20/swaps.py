from math import sqrt, ceil


def swap_numbers(t, n1, m):

    i = m + 1 - t

    if i < 1:
        j = 1 + t
        if j <= n1:
            return n1 - j + 1
        else:
            return 0

    else:
        num1 = t
        num2 = n1 - m

        if num1 < num2:
            return num1
        else:
            return num2


def bino_coeff(n):

    k = 2
    ans = 1

    if n < k:
        return 0

    if k > n - k:
        k = n - k

    for i in range(0, k):
        ans *= (n - i)
        ans /= (i + 1)

    return ans


def rootofeqn(c):

    DISC = sqrt(1 - 4*c)

    x1 = (-1 + DISC) / 2
    x2 = (-1 - DISC) / 2

    if x1 > 0:
        m = ceil(x1)
    elif x2 > 0:
        m = ceil(x2)

    return m


if __name__ == "__main__":
    for __ in range(int(input())):
        n = int(input())

        sumofn = (n*(n+1)) / 2

        if sumofn % 2 != 0:
            print(0)
            continue

        c = ((3*n) - pow(n, 2) - 4) / 2

        m = rootofeqn(c)

        sumofm = m*(m+1)
        temp = (sumofn - sumofm) / 2

        ans = 0

        while 1:

            if temp == 0:
                ans += bino_coeff(m) + bino_coeff(n-m)

            elif temp < 1:
                break

            elif n-1 >= temp:
                if temp.is_integer():
                    ans += swap_numbers(temp, n, m)

            m += 1
            temp -= m

        print(int(ans))
