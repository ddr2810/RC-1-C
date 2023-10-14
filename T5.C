#include <stdio.h>

int main()
{
    int l, m;
    scanf("%d %d", &l, &m);

    int n[l + 1]{0}; // 每一项有树时值为0，无树时值为1

    for (; m > 0; m--)
    {
        int u;
        int v;

        scanf("%d %d", &u, &v);

        for (; u <= v; u++)
            n[u] = 1;
    }

    int sum = 0;

    for (int i = 0; i < l + 1; i++) // 统计0的数量，即为树的数量
    {
        if (n[i] < 1)
            sum++;
    }

    printf("%d", sum);

    return 0;
}