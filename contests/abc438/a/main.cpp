#include <stdio.h>

int main(void)
{
    int D, F;

    scanf("%d %d", &D, &F);

    printf("%d\n", (7 - ((D - F) % 7)));

    return 0;
}