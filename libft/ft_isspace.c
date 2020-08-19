#include "libft.h"

int		ft_isspace(int c)
{
	if (c == 32 || (c > 8 && c < 14))
		return (1);
	return (0);
}
