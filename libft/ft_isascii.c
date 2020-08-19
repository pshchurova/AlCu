#include "libft.h"

int		ft_isascii(int n)
{
	if (n >= 0 && n < 128)
		return (1);
	return (0);
}
