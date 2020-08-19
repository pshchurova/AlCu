#include "alcu.h"

int		main(int argc, char **argv)
{
	int		fd;

	if (argc > 2)
		print_message(0);
	else if (argc > 1)
	{
		fd = open(argv[1], O_RDONLY);
		if (fd > 0)
			get_map(fd);
		else
			print_message(-1);
	}
	else
		get_map(0);
	return (0);
}
