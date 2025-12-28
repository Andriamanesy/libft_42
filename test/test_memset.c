#include "../include/libft.h"
#include <string.h>

int    test_basic_memset(void)
{
    char buf1[5] = {0};
    char buf2[5] = {0};
    int i = 0;

    ft_memset(buf1, 'A', 5);
    memset(buf2, 'A', 5);
    while (i < 5)
    {
        if (buf1[i] != buf2[i])
            return (0);
        i++;
    }
    return (1);
}

int test_length_zero_memset(void)
{
    char    buf1[5] = {0};
    char    buf2[5] = {0};
    int     i = 0;

    ft_memset(buf1, 'A', 0);
    memset(buf2, 'A', 0);
    while (i < 5)
    {
        if(buf1[i] != buf2[i])
            return (0);
        i++;
    }
    return (1);
}

int test_partial_fill_memset(void)
{
    char    buf1[10] = {0};
    char    buf2[10] = {0};
    int     i = 0;

    ft_memset(buf1, 'A', 5);
    memset(buf2, 'A', 5);
    while(i < 5)
    {
        if (buf1[i] != buf2[i])
            return (0);
        i++;
    }
    while(i < 10)
    {
        if (buf1[i] != buf2[i])
            return (0);
        i++;
    }
    return (1);
}

int test_value_255(void)
{
    char buf1[10] = {0};
    char buf2[10] = {0};
    int  i = 0;

    ft_memset(buf1, 255, 5);
    memset(buf2, 255, 5);
    while(i < 5)
    {
        if (buf1[i] != buf2[i])
            return (0);
        i++;
    }
    while(i < 10)
    {
        if (buf1[i] != buf2[i])
            return (0);
        i++;
    }
    return (1);
}

int test_value_superior_255(void)
{
    char buf1[10] = {0};
    char buf2[10] = {0};
    int i = 0;

    ft_memset(buf1, 300, 5);
    memset(buf2, 300, 5);
    while (i < 5)
    {
        if (buf1[i] != buf2[i])
            return (0);
        i++;
    }
    while (i < 10)
    {
        if (buf1[i] != buf2[i])
            return (0);
        i++;
    }
    return (1);
}

int test_minus_one(void)
{
        char buf1[10] = {0};
    char buf2[10] = {0};
    int i = 0;

    ft_memset(buf1, -1, 5);
    memset(buf2, -1, 5);
    while (i < 5)
    {
        if (buf1[i] != buf2[i])
            return (0);
        i++;
    }
    while (i < 10)
    {
        if (buf1[i] != buf2[i])
            return (0);
        i++;
    }
    return (1);
}

