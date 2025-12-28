#include <stdio.h>
#define COLOR_RED     "\033[31m"
#define COLOR_GREEN   "\033[32m"
#define COLOR_RESET   "\033[0m"
#include "./include/test_libft.h"

void    run_test(const char *name, int (*test)(void), int *total_test, int *passed_test)
{
    (*total_test)++;
    if(test())
    {
        printf(COLOR_GREEN "[OK] %s" COLOR_RESET "\n", name);
        (*passed_test)++;
    }
    else
        printf(COLOR_RED "[FAIL] %s" COLOR_RESET "\n", name);   
}

int main(void)
{
    int total_tests;
    int passed_tests;

    total_tests = 0;
    passed_tests = 0;
    t_test_libft tab_func[] = {
            {"test_basic_memset", test_basic_memset},
            {"test_length_zero_memset", test_length_zero_memset},
            {"test_partial_fill_memset", test_partial_fill_memset},
            {"test_value_255", test_value_255},
            {"test_value_superior_255", test_value_superior_255},
            {"test_minus_one", test_minus_one},
    };
    for(int i = 0; i < sizeof(tab_func)/sizeof(tab_func[0]); i++)
        run_test(tab_func[i].name, tab_func[i].func, &total_tests, &passed_tests);
    if (passed_tests == total_tests)
        printf(COLOR_GREEN "\n[%d/%d] tests passed\033[0m\n", passed_tests, total_tests);
    else
        printf(COLOR_RED "\n[%d/%d] tests passed\033[0m\n", passed_tests, total_tests);
    return (0);
}
