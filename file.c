#include <stdio.h>
int main()
{
    int i, n=8, t1 = 0, t2 = 1, next;
    printf("Fibonacci Series: ")
    for (i = 1; i <= n; ++i)
    {
        printf("%d  ", t1);
        next= t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    return 0;
}
