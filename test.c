#include <stdio.h>
#include "libft.h"

int main()
{
	char *s1 = "MZIRIBMZIRIBMZE123";
	char *s2 = "MZIRIBMZE";
	size_t max = strlen(s2);
	puts(ft_strnstr(s1,s2,max));
	puts(strnstr(s1,s2,max));

   
   return(0);
   
}