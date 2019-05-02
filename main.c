#include "get_next_line.h"
#include <stdio.h>
int main()
{
	char *line;
	int fd = open("test3.txt", O_RDONLY);
	int fd2 = open("test2.txt", O_RDONLY);
	int fd3 = open("test4.txt", O_RDONLY);
	int i = 1;
	while (i != 0)
	{
		while (get_next_line(fd2, &line))
		{
			printf("%s\n",line);
			ft_strdel(&line);
		}
		ft_strdel(&line);
		ft_putendl("-------");	
		while (get_next_line(fd, &line))
		{
			printf("%s\n",line);
			ft_strdel(&line);
		}
		ft_strdel(&line);
		ft_putendl("-------");
		while (get_next_line(fd3, &line))
		{
			printf("%s\n",line); 
			ft_strdel(&line);
		}
		ft_strdel(&line);
		return (0);
	}
	return (0);
}
