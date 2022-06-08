/*
** EPITECH PROJECT, 2022
** chocolatine_test
** File description:
** unit_tests
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

int test(void);

void redirect_all_stdout(void)
{
    cr_redirect_stdout ();
    cr_redirect_stderr ();
}

Test(test_choco, je_test_choco)
{
    cr_assert_eq(test(), 0);
}