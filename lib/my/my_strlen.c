/*
** EPITECH PROJECT, 2018
** strlen
** File description:
** strlen
*/

#include <unistd.h>

int my_strlen(char const *str)
{
    int i = 0;

    if (str != NULL) {
        while (str[i] != '\0') {
            i = i + 1;
        }
        return (i);
    }
    return (0);
}
