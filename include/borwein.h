/*
** EPITECH PROJECT, 2020
** 110borwein
** File description:
** .h
*/

#ifndef _BORWEIN_H_
#define _BORWEIN_H_

////////////////////
// ERROR HANDLING //
////////////////////
int error_handling(char *str);
int write_error(char const *str);
int display_help(void);
int my_strcmp(char const *str1, char const *str2);
void start(double n);

static const int ERROR = 84;
static const int SUCCESS = 0;
static const int TRUE = 1;
static const int FALSE = 0;

#endif /* _TRUC_H_ */
