/*
** EPITECH PROJECT, 2020
** 110borwein
** File description:
** .h
*/

#ifndef _BORWEIN_H_
#define _BORWEIN_H_

////////////////////
//    COMPUTING   //
////////////////////
double diff_pi(double pi, double res);
double borwein(double n, double x);
void midpoint(double n, double pi);
void trapezoidal(double n, double pi);
void simpson(double n, double pi);
void boole_rule(double n, double pi);
void simpson_bis(double n, double pi);

////////////////////
// ERROR HANDLING //
////////////////////
int error_handling(char *str);
int write_error(char const *str);
int my_strcmp(char const *str1, char const *str2);

static const int ERROR = 84;
static const int SUCCESS = 0;
static const int TRUE = 1;
static const int FALSE = 0;

#endif /* _TRUC_H_ */
