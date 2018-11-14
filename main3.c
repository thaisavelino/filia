#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"

/* Testing 1 FD */

int		main(int argc, char **argv)
{
	int		fd;
	char	*line;
	int		print_ret;
	int		i;

	fd = 1;
	if (argc >= 2)
	{
		if (access(argv[1], F_OK) == 0)
		{
			i = 0;
			fd = open(argv[1], O_RDONLY);
			while((print_ret = get_next_line(fd, &line)) == 1)
			{
				i++;
				printf("\nReturn main %d\nline %s\n", print_ret, line);
			}
			close(fd);
		}	
	}
	return (1);
}
