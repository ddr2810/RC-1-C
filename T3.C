#include <stdio.h>

int main()
{
    int n; // 数字个数
    scanf("%d", &n);

    int number[n];

    for (int i = 0; i < n; i++) // 输入数字
        scanf("%d", &number[i]);

    for (; n > 1; n--) // 挨个比大小，取小值
    {
        if (number[n - 1] < number[n - 2])
            number[n - 2] = number[n - 1];
    }

    printf("%d", number[0]);

    return 0;
}