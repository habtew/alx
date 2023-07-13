#include "main.h"
#include <stdlib.h>
#include <string.h>
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    unsigned int len_s2;
    unsigned int i, j;
    char *ptr;

    len_s2 = strlen(s2);
    
    j = 0;
    
    
    if (n >= len_s2)
    {
        ptr = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
        for(i = 0; s1[i] != '\0'; i++)
        {
            ptr[i] = s1[i];
            j++;
        }
        
        for(i = 0; s2[i] != '\0'; i++)
        {
            ptr[i + j] = s2[i];
        }
        
        return ptr;
    }
    else
    {
        ptr = malloc(sizeof(char) * (strlen(s1) + n + 1));
        for(i = 0; s1[i] != '\0'; i++)
        {
            ptr[i] = s1[i];
            j++;
        }
        
        for(i = 0; i < n; i++)
        {
            ptr[i + j] = s2[i];
        }
        ptr[i+j] = '\0';
        return (ptr);
    }
    
    
}
