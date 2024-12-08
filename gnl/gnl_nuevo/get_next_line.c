/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 11:13:19 by marvin            #+#    #+#             */
/*   Updated: 2024/11/29 11:13:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"

void	*free_memory(char **str)
{
	if (*str)
	{
		free(*str);
		*str = NULL;
	}
	return (NULL);
}

int	check_things(char *buffer)
{
	if (BUFFER_SIZE < 1 || !buffer)
		return (-1);
	return (1);
}

char	*read_line(int fd, char **unused_chars)
{
	char	*buffer;
	char	*temp;
	ssize_t	bytes_read;

	buffer = malloc(BUFFER_SIZE + 1);
	while (!ft_strrchr(*unused_chars, '\n') && buffer)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read == 0)
		{
			free_memory(&buffer);
			return (*unused_chars);
		}
		if (bytes_read < 0)
		{
			free_memory(unused_chars);
			break ;
		}
		buffer[bytes_read] = '\0';
		temp = *unused_chars;
		*unused_chars = ft_strjoin(temp, buffer);
		free_memory(&temp);
	}
	free_memory(&buffer);
	return (*unused_chars);
}

char	*extract_line_from_unused_chars(char **unused_chars)
{
	char	*newline_pos;
	char	*line;
	char	*temp;

	newline_pos = ft_strrchr(*unused_chars, '\n');
	if (newline_pos)
	{
		line = ft_substr(*unused_chars, 0, newline_pos - *unused_chars + 1);
		temp = ft_strdup(newline_pos + 1);
		free_memory(unused_chars);
		*unused_chars = temp;
	}
	else
	{
		if (ft_strlen(*unused_chars) > 0)
		{
			line = ft_strdup(*unused_chars);
			free_memory(unused_chars);
		}
		else
		{
			return (free_memory(unused_chars));
		}
	}
	return (line);
}

char	*get_next_line(int fd)
{
	static char	*unused_chars;
	char		*line;

	if (!unused_chars)
		unused_chars = ft_strdup("");
	if (check_things(unused_chars) < 0)
		return (NULL);
	if (!read_line(fd, &unused_chars))
	{
		free_memory(&unused_chars);
		return (NULL);
	}
	line = extract_line_from_unused_chars(&unused_chars);
	return (line);
}

// int main()
// {
//     // char *line;
//     // int fd;
//     // ssize_t bytes_read;

//     // line = malloc(sizeof(char) * (BUFFER_SIZE + 1));
//     // if (!line) {
//     //     write(2, "Error de memoria\n", 17);
//     //     return (1);
//     // }

//     // fd = open("texto.txt", O_RDONLY);
//     // if (fd < 0) {
//     //     write(2, "Error al abrir archivo\n", 23);
//     //     free(line);
//     //     return (1);
//     // }

//     // bytes_read = read(fd, line, BUFFER_SIZE);
//     // if (bytes_read < 0) {
//     //     write(2, "Error al leer archivo\n", 22);
//     //     close(fd);
//     //     free(line);
//     //     return (1);
//     // }

//     // line[bytes_read] = '\0';
//     // write(1, line, ft_strlen(line));
//     // close(fd);
//     // free(line);
//     // return (0);

// 	int fd = open("texto.txt", O_RDONLY);
// 	get_next_line(fd);
//     get_next_line(fd);
//     get_next_line(fd);

// }
