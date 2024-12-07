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

void *free_memory(char **str){
	free(*str);
	*str = NULL;
	return (NULL);
}

int	check_things(int fd)
{
	int	bytes_read;

	bytes_read = read(fd, 0, 0);
	if (bytes_read == -1 || BUFFER_SIZE < 1)
		return (-1);
	return (1);
}

char	*read_line(char *line, int fd)
{
	char	*newline_pos;
	ssize_t	bytes_read;
	char	*temp_line;
	char	*temp_chars;

	newline_pos = NULL;
	while ((newline_pos) == NULL)
	{
		temp_chars = malloc(BUFFER_SIZE + 1);
		bytes_read = read(fd, temp_chars, BUFFER_SIZE);
		if (bytes_read <= 0)
		{
			free_memory(&temp_chars);
			break ;
		}
		temp_chars[bytes_read] = '\0';
		temp_line = line;
		line = ft_strjoin(temp_line, temp_chars);
		newline_pos = ft_strrchr(temp_chars, '\n');
		free_memory(&temp_line);
		free_memory(&temp_chars);
	}
	return (line);
}

char	*get_unusedchars_line(char *unused_chars)
{
	char	*newline_pos;
	int		idx;

	newline_pos = ft_strrchr(unused_chars, '\n');
	idx = newline_pos - unused_chars;
	if (newline_pos == NULL)
		return (NULL);
	return (ft_substr(newline_pos, 0, idx));
}

char	*get_next_line(int fd)
{
	static char	*unused_chars;
	char		*line;
	char		*newline_pos;
	size_t		line_length;

	line = malloc(sizeof(char) * BUFFER_SIZE + 1);
	line[0] = '\0';
	if (!unused_chars)
	{
		unused_chars = malloc(sizeof(char) * BUFFER_SIZE + 1);
		unused_chars[0] = '\0';
	}

	if (check_things(fd) < 0)
	{
		free_memory(&unused_chars);
		free_memory(&line);
		return (NULL);
	}
	if(ft_strrchr(unused_chars, '\n') != NULL)
	{
		line = get_unusedchars_line(unused_chars);
		unused_chars = ft_substr(unused_chars, ft_strlen(line), ft_strlen(unused_chars));
		return (line);
	}

	line = read_line(line, fd);
	if (ft_strlen(line) == 0)
	{
		free_memory(&unused_chars);
		free_memory(&line);
		return (line);
	}
	char *temp_line = line;
	line = ft_strjoin(unused_chars, temp_line);
	free_memory(&temp_line);
	newline_pos = ft_strrchr(line, '\n');
	if (newline_pos)
	{
		line_length = newline_pos - line;
		free_memory(&unused_chars);
		unused_chars = ft_substr(newline_pos + 1, 0, ft_strlen(newline_pos
					+ 1));
		temp_line = line;
		line = ft_substr(temp_line, 0, line_length + 1);
		free_memory(&temp_line);
	}
	else
	{
		free_memory(&unused_chars);
		free_memory(&newline_pos);
		free_memory(&line);
	}
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
