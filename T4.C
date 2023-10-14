#include <stdio.h>
#include <string.h>

// 样例和题目描述冲突了。我照着题目描述做了

int main()
{
    char s[101];
    scanf("%100s", s); // 输入字符串

    int i = strlen(s);

    for (int n = 0; n < i; n++) // 照着ASCLL码把a~z转换为A~Z
    {
        if (s[n] >= 97 & s[n] <= 122)
            s[n] = s[n] - 32;
    }
    printf("%s", s);

    return 0;
}
