#include "my_printbase.h"

static int my_printbase_rec (const int nbr, const char *base_str, const int base)
{
    return ((nbr > 0) ? 
    my_printbase_rec((nbr - (nbr % base)) / base, base_str, base) 
    : 
    0)
    + 
    (
    (nbr == 0) ? 
    0 
    : 
    write (0, &(base_str[(nbr % base)]), 1)
    );
}

int my_printbase (const int nbr, const char *base)
{
    return (nbr != 0) ? 
    my_printbase_rec(nbr, base, my_strlen(base)) : 
    write (0, &(base[0]), 1);
}

