/*
** EPITECH PROJECT, 2018
** testmatch
** File description:
** testmatch
*/

#include <criterion/criterion.h>

int match(char const*, char const*);

Test(match, two_strings_equals)
{
    char str[10] = "Hola Helo";
    char str2[10] = "Hola Helo";

    cr_assert(match(str, str2) == 1);
}

Test(match, two_strings_not_equals)
{
    char str[10] = "Hola Helo";
    char str2[10] = "HolaHelo ";

    cr_assert(match(str, str2) == 0);
}

Test(match, two_strings_equals_asterix_start)
{
    char str[10] = "Hola Pouf";
    char str2[50] = "*********************Pouf";

    cr_assert(match(str, str2) == 1);
}

Test(match, two_strings_equals_oneasterix_start)
{
    char str[10] = "Hola Heko";
    char str2[20] = "*ko";

    cr_assert(match(str, str2) == 1);
}

Test(match, two_strings_equals_asterix_start3)
{
    char str[10] = "Hola Helo";
    char str2[20] = "***********Helo";

    cr_assert(match(str, str2) == 1);
}

Test(match, two_strings_not_equals_asterix_start)
{
    char str[10] = "Hola Helo";
    char str2[10] = "*ola Hulo";

    cr_assert(match(str, str2) == 0);
}

Test(match, two_strings_not_equals_asterix_start2)
{
    char str[10] = "Hola Helo";
    char str2[20] = "****** Hulo";

    cr_assert(match(str, str2) == 0);
}

Test(match, two_strings_equals_asterix_end)
{
    char str[10] = "Hola Halo";
    char str2[20] = "Hol******";

    cr_assert(match(str, str2) == 1);
}

Test(match, two_strings_equals_asterix_end2)
{
    char *str = "Hola Halo";
    char *str2 = "Hola Halo*****";

    cr_assert(match(str, str2) == 1);
}

Test(match, two_strings_not_equals_asterix_end)
{
    char str[10] = "Hola Helo";
    char str2[20] = "Hola Hal******";

    cr_assert(match(str, str2) == 0);
}

Test(match, two_strings_equals_asterix_mid)
{
    char str[10] = "Hola Halo";
    char str2[10] = "Hola*Halo";

    cr_assert(match(str, str2) == 1);
}

Test(match, two_strings_equals_asterix_mid2)
{
    char str[10] = "Hola Halo";
    char str2[22] = "Hola*Halo*";

    cr_assert(match(str, str2) == 1);
}

Test(match, two_strings_equals_asterix_mid3)
{
    char str[10] = "Hola Halo";
    char str2[22] = "Hola**Halo";

    cr_assert(match(str, str2) == 1);
}

Test(match, two_strings_not_equals_asterix_mid)
{
    char str[10] = "Hola Helo";
    char str2[10] = "Hola*Halo";

    cr_assert(match(str, str2) == 0);
}

Test(match, two_empty_strings)
{
    char str[10] = "";
    char str2[10] = "";

    cr_assert(match(str, str2) == 1);
}

Test(match, two_null_strings)
{
    char *str = NULL;
    char *str2 = NULL;

    cr_assert(match(str, str2) == 1);
}

Test(match, strone_empty_strings_oneasterix)
{
    char str[10] = "";
    char str2[10] = "*";

    cr_assert(match(str, str2) == 1);
}

Test(match, strtwo_empty_strings_start_asterix)
{
    char str[10] = "*ffff";
    char str2[10] = "";

    cr_assert(match(str, str2) == 0);
}

Test(match, strone_empty_strings_end_asterix)
{
    char str[10] = "";
    char str2[10] = "fef*";

    cr_assert(match(str, str2) == 0);
}

Test(match, strtwo_empty_strings)
{
    char str[10] = "ffff";
    char str2[10] = "";

    cr_assert(match(str, str2) == 0);
}

Test(match, strone_empty_strings)
{
    char str[10] = "";
    char str2[10] = "feff";

    cr_assert(match(str, str2) == 0);
}
