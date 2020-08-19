#include "libft.h"

int		ft_iscntrl(int c)
{
	if ((c > 0 && c < 32) || c == 127)
		return (1);
	if (c == 0)
		return (1);
	return (0);
}
