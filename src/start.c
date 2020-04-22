/*
** EPITECH PROJECT, 2020
** 110borwein
** File description:
** start
*/

#include <math.h>
#include "borwein.h"

void start(double n)
{
    double pi = M_PI / 2;

    midpoint(n, pi);
    trapezoidal(n, pi);
    simpson(n, pi);
}
