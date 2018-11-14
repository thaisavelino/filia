#include <stdio.h>
#include "get_next_line.h"
#include <unistd.h>
#include <fcntl.h>

int	main(void)
{
	int		fd;
	int		ret;
	char	*line;

	fd = open(fd, O_RDONLY);
	while ((ret = get_next_line(fd, &line)) > 0)
	{
		//printf("%s\n", line);
		printf("\nReturn main %d\nline %s\n", ret, line);
	}
	close(fd);
	free(line);
	return (0);
}
