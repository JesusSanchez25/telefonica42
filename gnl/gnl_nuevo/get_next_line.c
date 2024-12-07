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

void *free_memory(char **str)
{
	if (*str)
	{
		free(*str);
		*str = NULL;
	}
	return (NULL);
}

int check_things(int fd)
{
	if (read(fd, 0, 0) == -1 || BUFFER_SIZE < 1)
		return (-1);
	return (1);
}

char *read_line(int fd, char **unused_chars)
{
	char *buffer;
	char *temp;
	ssize_t bytes_read;

	// printf("Ha entrado a leer la linea\n");
	buffer = malloc(BUFFER_SIZE + 1);
	while (!ft_strrchr(*unused_chars, '\n'))
	{
		// printf("No había una línea en unused_chrars\n");
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read == 0)
		{
			// printf("Se han leido 0 caracteres\n");
			// printf("Unused chars vale: %s\n", *unused_chars);
			free_memory(&buffer);
			return (*unused_chars);
		}
		if (bytes_read < 0)
		{
			// printf("Ha dado error de caracteres");
			free_memory(unused_chars);
			break ;
		}
		buffer[bytes_read] = '\0';
		temp = *unused_chars;
		*unused_chars = ft_strjoin(temp, buffer);
		free_memory(&temp);
		// printf("$$Se ha leido:%s€€\n", *unused_chars);
	}
	// printf("Se ha salido de leer una linea\n");
	free_memory(&buffer);
	return (*unused_chars);
}

char *extract_line_from_unused_chars(char **unused_chars)
{
	char *newline_pos;
	char *line;
	char *temp;
	int  idx;

	// printf("Se ha entrado a extraer la linea\n");
	newline_pos = ft_strrchr(*unused_chars, '\n') + 1;
	idx = newline_pos - *unused_chars;
	// printf("EXT - Unused chars: %s\n", *unused_chars);
	// // printf("EXT - New line:%s\n", newline_pos);
	// printf("EXT - Final de linea: %d\n", idx);
	if (ft_strlen(*unused_chars) > 0 && newline_pos)
	{
		// printf("Se ha encontrado un salto de linea\n");
		line = ft_substr(*unused_chars, 0, idx);
		printf("EXT - NEW_LINE: %s €€", newline_pos);
		temp = ft_strdup(newline_pos);
		// printf("Se ha sacado la línea: %s\n", line);
		free_memory(unused_chars);
		*unused_chars = temp;
		// printf("Se han sacado los caracteres %s\n", *unused_chars);
	}
	else
	{
		// line = ft_strdup(*unused_chars);
		if (ft_strlen(*unused_chars) > 0)
			return (*unused_chars);
		else
		{
			return (NULL);
			free_memory(unused_chars);
		}
	}
	// printf("Se ha salido de extraer una linea\n");
	return (line);
}


char *get_next_line(int fd)
{
	static char *unused_chars;
	char		*line;

	if (check_things(fd) < 0)
		return (NULL);
	if (!unused_chars)
		unused_chars = ft_strdup("");
	// printf("GNL - Unused vale: %d", *unused_chars);
	if (!read_line(fd, &unused_chars))
	{
		free_memory(&unused_chars);
		return (NULL);
	}
	line = extract_line_from_unused_chars(&unused_chars);
	// printf("Se ha retornado los caracteres leidos: %s\n", line);
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
