#include "libft.h"

int		ft_isprint(int n)
{
	if (n > 31 && n < 127)
		return (1);
	return (0);
}
