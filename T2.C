#include <stdio.h>

int main()
{
    const int d = 30; // 板凳高度

    int number[10];

    for (int i = 0; i < 10; i++) // 输入苹果高度
        scanf("%d", &number[i]);

    int h; // 手伸直的最大高度
    scanf("%d", &h);

    int H = h + d; // 人加凳总高度

    int sum = 0; // 能摘到的苹果数

    for (int i = 0; i < 10; i++)
    {
        if (number[i] <= H)
            sum++;
    }

    printf("%d", sum);

    return 0;
}