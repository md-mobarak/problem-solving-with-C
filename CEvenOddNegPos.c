#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a;
    int even = 0;
    int odd = 0;
    int neg = 0;
    int postive = 0;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a);
        if (a % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        if (a > 0)
        {
            postive++;
        }
        else if (a < 0)
        {
            neg++;
        }
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n", even, odd, postive, neg);

    return 0;
}