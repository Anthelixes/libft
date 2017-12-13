// DA
#include "libft.h"

char  *ft_strncpy(char *dest, const char *src, size_t n)
{
   char *p;
   char *q;

   p = dest;
   q = (char*) src;

   while (*q && n)
   {
      *p = *q;
      n--;
      p++;
      q++;
   }

   while (n)
   {
      *p = '\0';
      n--;
      p++;
   }

   return dest;
}