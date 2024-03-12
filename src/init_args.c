#include "main.h"

void init_args (t_arg *arguments)
{
    arguments = malloc (sizeof (t_arg) * 6);
    //  utiliser un format d’affichage long
    // add_argument(&(arguments[0]), 'l', long_print);

    // afficher récursivement les sous-répertoires
    // add_argument(&(arguments[1]), 'R', recursive_repo);

    // inverser l’ordre du tri
    // add_argument(&(arguments[2]), 'r', reverse_print);

    // trier selon la date de modification
    // add_argument(&(arguments[3]), 't', time_sort);

    // inclure les entrées débutant par « . »
    // add_argument(&(arguments[4]), 'a', show_hidden);

    // avec -l, afficher l’auteur de chaque fichier
    // add_argument(&(arguments[5]), 'A', show_author);
}