/*
** EPITECH PROJECT, 2020
** 110
** File description:
** start
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "borwein.h"

double compute_eval(double n, double x)
{
    double temp = 0;
    double res = 0;
    double res1 = 0;
    double res2 = 0;

    if (x == 0)
        return (0);
    for (double k = 0; k <= n; k++) {
        temp = (2 * k) + 1;
        if (temp == 0)
            exit(84);
        res1 = sin(x / temp);
        res2 = x / temp;
        if (res2 == 0)
            exit(84);
        if (k != 0)
            res *= res1 / res2;
        else
            res = res1 / res2;
    }
    return (res);
}

void start(double n)
{
    double res1;
    double res;
    double res2;
    double res3;
    double pi = M_PI / 2;

    for (double a = 0, b = 0.5; b <= 5000; a += 0.5, b += 0.5) {
        res1 = compute_eval(n, (a + b) / 2);
        res1 *= b - a;
        res += res1;
    }
    printf("Midpoint:\nI%.0f = %.10f\n", n, res);
    printf("diff = %.10f\n\n", (res - pi) * -1);
    res = 0;
    for (double a = 0, b = 0.5; b <= 5000; a += 0.5, b += 0.5) {
        res2 = compute_eval(n, a);
        res3 = compute_eval(n, b);
        res1 = res2 + res3;
        res1 *= ((b - a) / 2);
        res += res1;
    }
    printf("Trapezoidal:\nI%.0f = %.10f\n", n, res);
    printf("diff = %.10f\n\n", (res - pi) * -1);
}
