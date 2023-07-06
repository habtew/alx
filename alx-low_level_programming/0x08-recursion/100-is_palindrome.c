#include "main.h"
#include <string.h>


int helper(char *s, int i)
{
        int len;

        len = strlen(s) - (i + 1);
        if (s[i] == s[len])
        {
                if (i + 1 == len || i == len)
                {
                        return (1);
                }
                return (helper(s, i + 1));
                }
        return (0);
}

int is_palindrome(char *s)
{
        return (helper(s, 0));
}
