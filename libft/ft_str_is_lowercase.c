#include "libft.h"

int		ft_str_is_lowercase(char *str)
{
	if (str && *str)
		while (*str)
		{
			if (!(str[0] > 96 && str[0] < 123))
				return (0);
			str++;
		}
	return (1);
}
