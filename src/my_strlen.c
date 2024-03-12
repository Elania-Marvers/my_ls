#include "my_strlen.h"


int my_strlen (const char *str)
{
    return (str[0] == 0) ? 0 : 1 + my_strlen(&(str[1]));
}