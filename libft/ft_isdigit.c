#include "libft.h"

int		ft_isdigit(int n)
{
	if (n > 47 && n < 58)
		return (1);
	return (0);
}
