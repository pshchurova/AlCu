#include "libft.h"

int		ft_str_is_numeric(char *str)
{
	if (str && *str)
		while (*str)
		{
			if (!(ft_isdigit(str[0])))
				return (0);
			str++;
		}
	return (1);
}
