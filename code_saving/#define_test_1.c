#include <stdio.h>

#define EMPTY
#define SUM(x)  ((x) + (x))
int main(void)
{
    int x = 10;

    printf("%d\n", SUM(x));
    printf("SUM(x)");
    return 0;
}