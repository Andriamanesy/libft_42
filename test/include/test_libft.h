#ifndef TEST_LIBFT_H
#define TEST_LIBFT_H

typedef int (*t_test_func) (void);
typedef struct s_test_libft
{
    const char *name;
    t_test_func func;
}t_test_libft;

int    test_basic_memset(void);
int test_length_zero_memset(void);
int test_partial_fill_memset(void);
int test_value_255(void);
int test_value_superior_255(void);
int test_minus_one(void);

#endif 