#include "libft.h"

int		ft_isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	return (0);
}
