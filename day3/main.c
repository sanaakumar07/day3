#include <stdio.h>

int main(void)
{
    int n, i, k;
    int a[100];
    int c = 0;
    int flag = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &k);

    for (i = 0; i < n; i++)
    {
        c++;
        if (a[i] == k)
        {
            printf("Found at index %d\n", i);
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        printf("Not Found\n");
    }

    printf("Comparisons = %d\n", c);

    return 0;
}

