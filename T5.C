#include <stdio.h>

int main()
{
    int l, m;
    scanf("%d %d", &l, &m);

    int n[l + 1]{0};

    for (; m > 0; m--)
    {
        int u;
        int v;

        scanf("%d %d", &u, &v);

        for (; u <= v; u++)
            n[u] = 1;
    }

    int sum = 0;

    for (int i = 0; i < l + 1; i++)
    {
        if (n[i] < 1)
            sum++;
    }

    printf("%d", sum);

    return 0;
}