#ifndef ___ARG_H___
#define ___ARG_H___

typedef struct s_arg {
    void (*func)(void *);
    char delimiter;
}               t_arg;

#endif //___ARG_H___