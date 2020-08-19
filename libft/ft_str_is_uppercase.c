#include "libft.h"

int		ft_str_is_uppercase(char *str)
{
	if (str && *str)
		while (*str)
		{
			if (!(str[0] > 64 && str[0] < 91))
				return (0);
			str++;
		}
	return (1);
}
