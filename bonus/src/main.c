/*
** EPITECH PROJECT, 2020
** 110borwein
** File description:
** main
*/

#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "borwein.h"
#include "error_msg.h"

int display_help(void)
{
    printf("USAGE\n    ./110borwein n\n\n");
    printf("DESCRIPTION\n    n\tconstant defining the integral ");
    printf("to be computed\n");
    return (SUCCESS);
}

static void start(double n)
{
    double pi = M_PI / 2;

    midpoint(n, pi);
    trapezoidal(n, pi);
    simpson(n, pi);
    boole_rule(n, pi);
}

int main(int ac, char **av)
{
    if (ac != 2)
        return (write_error(STR_ERROR_ARG));
    if (my_strcmp(av[1], "-h"))
        return (display_help());
    if (error_handling(av[1]))
        return (ERROR);
    start(atof(av[1]));
    return (SUCCESS);
}
