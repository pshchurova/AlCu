#include "libft.h"

int		ft_isalnum(int n)
{
	if ((n > 47 && n < 58) || (n > 64 && n < 91) || (n > 96 && n < 123))
		return (1);
	return (0);
}
