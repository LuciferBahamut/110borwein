/*
** EPITECH PROJECT, 2020
** 110borwein
** File description:
** main
*/

#include "borwein.h"
#include "error_msg.h"

int main(int ac, char **av)
{
    if (ac != 2)
        return (write_error(STR_ERROR_ARG));
    if (my_strcmp(av[1], "-h"))
        return (display_help());
    if (error_handling(av[1]))
        return (ERROR);
    return (SUCCESS);
}
