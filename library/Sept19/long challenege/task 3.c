#include <stdio.h>

int main()
{
    long long int times;
    long long int number, nextnumber, i, count, maximum;
    scanf("%lld", &times);
    while (times--)
    {
        scanf("%lld %lld", &number, &nextnumber);
        maximum = number * (number + 1) / 2;
        if (nextnumber >= (number - 1) && nextnumber <= maximum)
        {
            if (number == 1 && (nextnumber == 0 || nextnumber == 1))
                printf("%lld\n", &nextnumber);
            else if (number == 2 && nextnumber == 1)
                printf("%lld\n", &nextnumber);
            else if (nextnumber >= (number - 1) && nextnumber <= (number + 1))
                printf("2\n");
            else if (nextnumber >= (number + 2) && nextnumber <= (2 * number))
                printf("3\n");
            else
            {
                count = 4;
                if (number % 2 == 0)
                {
                    for (i = 2 * number + 1; i <= maximum; i = i + number / 2)
                    {
                        if (nextnumber >= i && nextnumber < (i + number / 2))
                        {
                            printf("%lld\n", &count);
                            break;
                        }
                        count++;
                    }
                }
                else
                {
                    for (i = 2 * number + 1; i <= maximum; i = i + number)
                    {
                        if (nextnumber >= i && nextnumber < (i + number / 2))
                        {
                            printf("%lld\n", &count);
                            break;
                        }
                        count++;
                        if (nextnumber >= (i + number / 2) && nextnumber < (i + number))
                        {
                            printf("%lld\n", &count);
                            break;
                        }
                        count++;
                    }
                }
            }
        }
        else
            printf("-1\n");
    }
}
