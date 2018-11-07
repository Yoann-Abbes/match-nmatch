/*
** EPITECH PROJECT, 2018
** match
** File description:
** match
*/

#include <unistd.h>
#include "my.h"

int handle_error(char const *s1, char const *s2)
{
    int error_m = 2;
    int size1 = my_strlen(s1);

    if ((s1 == NULL && s2 == NULL) || (size1 == 0 && my_strlen(s2) == 0))
        error_m = 1;
    else if ((s1 == NULL && s2 != NULL) || (s1 != NULL && s2 == NULL))
        error_m = 0;
    else
        error_m = size_error(s1, s2, error_m);
    return (error_m);
}

int size_error(char const *s1, char const *s2, int error_size)
{
    int size1 = my_strlen(s1);
    int size2 = my_strlen(s2);

    if ((size1 == 0 && size2 > 0) || (size1 > 0 && size2 == 0))
        error_size = 0;
    if (size1 == 0 && size2 == 1 && s2[0] == '*')
        error_size = 1;
    if (size2 == 0 && size1 == 1 && s1[0] == '*')
        error_size = 1;
    return (error_size);
}

int do_cmp(char const *s1, char const *s2)
{
    if (*s1 == *s2) {
        if (*s2 != '\0')
            return (do_cmp(s1 + 1, s2 + 1));
        else
            return (1);
    } else {
        if (*s2 == '*' && *s1 == '\0' && *(s2 + 1) == '\0')
            return (1);
        if (*s2 == '*' && *s1 == '\0' && *(s2 + 1) != '\0')
            return (do_cmp(s1, s2 + 1));
        if (*s2 == '*' && *s1 != '\0')
            return (do_cmp(s1 + 1, s2) || do_cmp(s1, s2 + 1));
    }
    return (0);
}

int match(char const *s1, char const *s2)
{
    if (handle_error(s1, s2) == 2)
        return (do_cmp(s1, s2));
    else
        return (handle_error(s1, s2));
}
