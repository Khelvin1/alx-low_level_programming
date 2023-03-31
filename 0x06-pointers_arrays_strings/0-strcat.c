#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @SRC: input value
 * Return: void
 */
char *_strcat(char *dest, char *SRC)
{
        int i;
        int j;

        i = 0;
        while (dest[i] != '\0')
        {
        i++;
        }
        j = 0;
        while (SRC[j] != '\0')
        {
        dest[i] = SRC[j];
        i++;
        j++;
        }
        dest[i] = '\0';
        return (dest);
}
