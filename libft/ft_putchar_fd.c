#include "libft.h"

void	ft_putchar_fd(int c, int fd)
{
	if (fd > 0)
	{
		if (c >= 0 && c < 128)
			write(fd, &c, 1);
		else
			write(fd, &c, 2);
	}
}
