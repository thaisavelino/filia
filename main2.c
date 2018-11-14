#include <fcntl.h>
#include <stdio.h>

/* teste final */

int main(int argc, char **argv)
{
	char *line;
	int fd = argc > 1 ? open(argv[1], O_RDONLY) : 42;
	int ret;

	while((ret = get_next_line(fd, &line)) > 0)
		printf("%s\n", line);
	printf("Ret: %d\n", ret);
}

/*
 * teste geral
 *
 *
#include <fcntl.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	char *line;
	int fd = argc > 1 ? open(argv[1], O_RDONLY) : 0;
	int ret;

	while((ret = get_next_line(fd, &line)) > 0)
		printf("%s\n", line);
	printf("Ret: %d\n", ret);
}
*/
