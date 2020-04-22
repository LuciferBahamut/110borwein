/*
** EPITECH PROJECT, 2020
** 110 borwein
** File description:
** unit_tests
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "borwein.h"

void redirect_all_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(errors_few_args, exit_code, .init=redirect_all_stdout)
{
    int ac = 1;
    char **av;

    start(ac, av);
    cr_assert_stderr_eq_str("This program must take one arg (see with -h)\n", "");
}
