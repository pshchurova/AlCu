#include "libft.h"

void	ft_putstr(char const *s)
{
	if (s != 0)
		while (s[0] != '\0')
		{
			write(1, s, 1);
			s++;
		}
}
