#include "libft.h"

int		ft_toupper(int n)
{
	if (n > 96 && n < 123)
		return (n - 32);
	return (n);
}
