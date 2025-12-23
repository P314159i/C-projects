/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pidi <pidi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 14:13:42 by pidi              #+#    #+#             */
/*   Updated: 2025/12/22 17:10:08 by pidi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	ft_free(char **p1, char **p2)
{
	if (p1 && *p1)
	{
		free(*p1);
		*p1 = NULL;
	}
	if (p2 && *p2)
	{
		free(*p2);
		*p2 = NULL;
	}
}

char	*ft_read(int fd, char *chnk)
{
	char	*buffer;
	int		bytes;
	char	*tmp;

	if (!chnk)
		return (NULL);
	buffer = malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (ft_free(NULL, &chnk), NULL);
	bytes = 1;
	while (!ft_strchr(chnk, '\n') && bytes != 0)
	{
		bytes = read(fd, buffer, BUFFER_SIZE);
		if (bytes < 0)
			return (ft_free(&chnk, &buffer), NULL);
		buffer[bytes] = '\0';
		tmp = ft_strjoin(chnk, buffer);
		if (!tmp)
			return (ft_free(&chnk, &buffer), NULL);
		free(chnk);
		chnk = tmp;
	}
	free(buffer);
	return (chnk);
}

char	*ft_extract_line(char **chnk)
{
	char	*line;
	char	*remain;

	if (!chnk || !*chnk)
		return (NULL);
	if (**chnk == '\0')
		return (ft_free(chnk, NULL), NULL);
	if (ft_strchr(*chnk, '\n'))
	{
		line = ft_substr(*chnk, 0, ft_strchr(*chnk, '\n') - *chnk + 1);
		if (!line)
			return (ft_free(chnk, NULL), NULL);
		remain = ft_strdup(ft_strchr(*chnk, '\n') + 1);
		if (!remain)
			return (free(line), ft_free(chnk, NULL), NULL);
	}
	else
	{
		line = ft_strdup(*chnk);
		if (!line)
			return (ft_free(chnk, NULL), NULL);
		remain = NULL;
	}
	return (free(*chnk), *chnk = remain, line);
}

char	*get_next_line(int fd)
{
	static char	*chnk;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (!chnk)
		chnk = ft_strdup("");
	chnk = ft_read(fd, chnk);
	if (!chnk || chnk[0] == '\0')
	{
		if (chnk)
			free(chnk);
		chnk = NULL;
		return (NULL);
	}
	line = ft_extract_line(&chnk);
	return (line);
}

// #include "get_next_line.h"
// #include <fcntl.h>
// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     int fd = open("1char.txt", O_RDONLY);
//     if (fd < 0)
//     {
//         perror("open 1char.txt");
//         return (1);
//     }
//     char *line;
//     while ((line = get_next_line(fd)))
//     {
//         printf("%s", line);
//         free(line);
//     }
//     close(fd);
//     return (0);
// }
