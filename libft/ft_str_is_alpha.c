#include "libft.h"

int		ft_str_is_alpha(char *str)
{
	if (str && *str)
		while (*str)
		{
			if (!(ft_isalpha(str[0])))
				return (0);
			str++;
		}
	return (1);
}
