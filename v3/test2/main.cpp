#include <stdio.h>
#include "sort.h"

int main()
{
    int a[10] = {11, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    sort(a, 10);

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
