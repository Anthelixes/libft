//DA
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
   unsigned char *str;
   size_t i;

   i = 0;
   str = NULL;
   while (i < n)
   {
      if (((unsigned char*)s)[i] == (unsigned char)c )
      {
         str = &((unsigned char*)s)[i];
         return (str);
      }
      i++;
   }
   return (str);
}