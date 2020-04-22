/*
** EPITECH PROJECT, 2020
** 110
** File description:
** boole rule
*/

#include <stdio.h>
#include <math.h>
#include "borwein.h"

static double diff_pi(double pi, double res)
{
    double n_pi = res - pi;

    if (n_pi >= 0)
        return (n_pi);
    else
        return (-n_pi);
}

static double borwein(double n, double x)
{
    double temp = 0;
    double res = 0;
    double res1 = 0;
    double res2 = 0;

    if (x == 0)
        return (1);
    for (double k = 0; k <= n; k++) {
        temp = (2 * k) + 1;
        res1 = sin(x / temp);
        res2 = x / temp;
        if (k != 0)
            res *= (res1 / res2);
        else
            res = (res1 / res2);
    }
    return (res);
}

void boole_rule(double n, double pi)
{
    double h = 0;
    double res = 0;
    double temp = 0;

    for (double a = 0, b = 0.5; b <= 5000; a += 0.5, b += 0.5) {
        h = a;
        temp = 7 * borwein(n, h);
        h = a + ((b - a) / 4);
        temp += 32 * borwein(n, h);
        h = a + (2 * ((b - a) / 4));
        temp += 12 * borwein(n, h);
        h = a + (3 * ((b - a) / 4));
        temp += 32 * borwein(n, h);
        h = a + (4 * ((b - a) / 4));
        temp += 7 * borwein(n, h);
        temp *= ((2 * ((b - a) / 4)) / 45);
        res += temp;
    }
    pi = diff_pi(pi, res);
    printf("Boole:\nI%.0f = %.10f\n", n, res);
    printf("diff = %.10f\n", pi);
}
