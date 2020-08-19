#include "libft.h"

int		ft_isxdigit(int c)
{
	if ((c > 47 && c < 58) || (c > 64 && c < 71) || (c > 96 && c < 103))
		return (1);
	return (0);
}
