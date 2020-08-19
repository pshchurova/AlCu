#include "libft.h"

void	ft_strclr(char *s)
{
	if (s != 0)
		while (*s != '\0')
		{
			*s = '\0';
			s++;
		}
}
