
#include "main.h"
/**
 * memset - fills memory with a constant byte.
 * @s: source string 
 * @b: the contant byte dor filling 
 * @n: lenght of buffer
 * Return: a news string.
 */
 char *_memset(char *s, char b,unsigned int n)
{
        unsigned i = 0;
        
		while (i < n)
        {
                
                {
                        *(s+i)= b;
			i++;
                }
              
                return(s);
}

