/*
** EPITECH PROJECT, 2018
** testnmatch
** File description:
** testnmatch
*/

#include <criterion/criterion.h>

int nmatch(char const*, char const*);

Test(nmatch, example1)
{
    char str[10] = "abcbd";
    char str2[10] = "*b*";

    cr_assert(nmatch(str, str2) == 2);
}

Test(nmatch, example2)
{
    char str[10] = "abc";
    char str2[10] = "a**";

    cr_assert(nmatch(str, str2) == 3);
}

Test(nmatch, two_empty_strings)
{
    char str[10] = "";
    char str2[10] = "";

    cr_assert(nmatch(str, str2) == 1);
}

Test(nmatch, two_null_strings)
{
    char *str = NULL;
    char *str2 = NULL;

    cr_assert(nmatch(str, str2) == 1);
}

Test(nmatch, strone_empty_strings_oneasterix)
{
    char str[10] = "";
    char str2[10] = "*";

    cr_assert(nmatch(str, str2) == 1);
}

Test(nmatch, strtwo_empty_strings_start_asterix)
{
    char str[10] = "*ffff";
    char str2[10] = "";

    cr_assert(nmatch(str, str2) == 0);
}

Test(nmatch, strone_empty_strings_end_asterix)
{
    char str[10] = "";
    char str2[10] = "fef*";

    cr_assert(nmatch(str, str2) == 0);
}

Test(nmatch, strtwo_empty_strings)
{
    char str[10] = "ffff";
    char str2[10] = "";

    cr_assert(nmatch(str, str2) == 0);
}

Test(nmatch, strone_empty_strings)
{
    char str[10] = "";
    char str2[10] = "feff";

    cr_assert(nmatch(str, str2) == 0);
}
