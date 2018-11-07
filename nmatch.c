/*
** EPITECH PROJECT, 2018
** match
** File description:
** match
*/

#include <unistd.h>
#include "my.h"

int count_comb(char const *s1, char const *s2)
{
    if (*s1 == *s2) {
        if (*s2 != '\0')
            return (count_comb(s1 + 1, s2 + 1));
        else
            return (1);
    } else {
        if (*s2 == '*' && *s1 == '\0' && *(s2 + 1) == '\0')
            return (1);
        if (*s2 == '*' && *s1 == '\0' && *(s2 + 1) != '\0')
            return (count_comb(s1, s2 + 1));
        if (*s2 == '*' && *s1 != '\0')
            return (count_comb(s1 + 1, s2) + count_comb(s1, s2 + 1));
    }
    return (0);
}

int nmatch(char const *s1, char const *s2)
{
    if (handle_error(s1, s2) == 2)
        return (count_comb(s1, s2));
    else
        return (handle_error(s1, s2));
}
