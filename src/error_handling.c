/*
** EPITECH PROJECT, 2020
** 110borwein
** File description:
** error handling
*/

#include "borwein.h"
#include "error_msg.h"

int error_handling(char *str)
{
    int i = 0;
    int nbr = 0;

    if (str[0] == '-')
        i++;
    for (; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9')
            continue;
        else if (str[i] == '.') {
            if (nbr == 0)
                return (write_error(STR_ERROR_VALNBR));
            nbr++;
            continue;
        }
        else
            return (write_error(STR_ERROR_NBR));
    }
    return (FALSE);
}
