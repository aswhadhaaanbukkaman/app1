#include <stdio.h>

int main()
{
    int x;
    for (x = 0; x < 10; x++)
        if (x % 2)
            printf("%d is odd\n", x);
    return 0;
}

/* and.c */
#include <stdio.h>

int main(void)
{
    int x;
    for (x = 0; x < 10; x++)
        if (x & 1)
            printf("%d is odd\n", x);
    return 0;
}
