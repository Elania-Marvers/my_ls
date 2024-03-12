#ifndef ___MAIN_H___
#define ___MAIN_H___

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "arg.h"

int my_strlen (const char *);
void init_args (t_arg *);
int my_printbase (const int nbr, const char *base);

#endif //___MAIN_H___