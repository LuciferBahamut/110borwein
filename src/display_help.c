/*
** EPITECH PROJECT, 2020
** 110borwein
** File description:
** display the help
*/

#include <stdio.h>
#include "borwein.h"

int display_help(void)
{
    printf("USAGE\n    ./110borwein n\n\n");
    printf("DESCRIPTION\n    n\tconstant defining the integral ");
    printf("to be computed\n");
    return (SUCCESS);
}
