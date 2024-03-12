#include "main.h"

int main (int   argc, 
          char  *argv[]) 
{

    t_arg *arguments;
    init_args(arguments);

    my_printbase(4567, "0123456789");
    my_printbase(0, "0123456789");

    free (arguments);
}