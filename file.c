#include <stdio.h>
int main()
{
    int i, n=8, t1 = 0, t2 = 1, m;
    printf("Fibonacci Series: ");
    for (i = 1; i <= n; ++i)
    {
        printf("%d  ", t1);
        m= t1 + t2;
        t1 = t2;
        t2 = m;
    }
    return 0;
}
