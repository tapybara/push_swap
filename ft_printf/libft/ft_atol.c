#include "libft.h"

long ft_atol(const char *str)
{
    long int result = 0;
    int sign = 1;
    
    // ホワイトスペースをスキップ
    while (*str == ' ' || *str == '\t' || *str == '\n')
        str++;
    
    // 符号の処理
    if (*str == '+' || *str == '-')
    {
        if (*str == '-')
            sign = -1;
        str++;
    }
    
    // 数値の処理
    while (*str >= '0' && *str <= '9')
    {
        // long型の最大値と最小値を超えた場合のエラー処理
        if (result > LONG_MAX / 10 || (result == LONG_MAX / 10 && (*str - '0') > LONG_MAX % 10))
        {
            if (sign == 1)
                return LONG_MAX;
            else
                return LONG_MIN;
        }
        result = result * 10 + (*str - '0');
        str++;
    }
    
    return (sign * result);
}