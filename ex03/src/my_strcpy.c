#include <stdio.h>
#include <string.h>

char *my_strcpy(char *dest, const char *src)

{
    int i;

    i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}
