#include "main.h"
/**
 * binary_to_uint - converts to an unsigned int
 * @b: the binary number as a string
 *
 * Return: the converted value
 */
unsigned int binary_to_uint(const char *b)
{
    unsigned int d = 0;
    int len = 0, base = 1;

    if (!check_valid_string(b))
    return (0);
    while (b[len] != '\0')
        len++;
    while (len)
    {
        d += ((b[len - 1] - '0') * base);
        base *= 2;
        len--;
    }
    return (d);
}

/**
 * check_valid_string - checks if a string has only 0 and 1
 * @b: string to be checked
 *
 * Return: 1 if string is valid, 0 otherwise
 */
int check_valid_string(const char *b)
{
    if (b == NULL)
    return (0);
    while (*b)
    {
        if (*b != '1' && *b != '0')
        return (0);
        b++;
    }
    return (1);
}