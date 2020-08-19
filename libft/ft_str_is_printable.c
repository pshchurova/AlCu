#include "libft.h"

int		ft_str_is_printable(char *str)
{
	if (str && *str)
		while (*str)
		{
			if (!(ft_isprint(str[0])))
				return (0);
			str++;
		}
	return (1);
}
