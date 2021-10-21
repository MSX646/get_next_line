/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajordan- <ajordan-@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 10:12:14 by ajordan-          #+#    #+#             */
/*   Updated: 2021/10/21 19:18:14 by kezekiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*read_to(int fd, char *str)
{
	char	*buff;
	int		bytes;

	buff = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buff)
		return (NULL);
	bytes = 1;
	while (!ft_strchr(str, '\n') && bytes != 0)
	{
		bytes = read(fd, buff, BUFFER_SIZE);
		if (bytes == -1)
		{
			free(buff);
			return (NULL);
		}
		buff[bytes] = '\0';
		str = ft_strjoin(str, buff);
	}
	free(buff);
	return (str);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*str;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	str = read_to(fd, str);
	if (!str)
		return (NULL);
	line = get_line(str);
	str = new_str(str);
	return (line);
}

/*#include <stdio.h>
#include <fcntl.h>
int	main()
{
	int fd = open("test.txt", O_RDONLY);
	int i = 0;
	char	*str = 0;
	while (i++ < 100)
	{
		str = get_next_line(fd);
		printf("%s", str);
		free(str);
	}
}*/
