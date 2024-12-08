/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 09:51:44 by marvin            #+#    #+#             */
/*   Updated: 2024/12/03 09:51:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int	main(void)
{
	int	fd;

	// char *line;
	// int fd;
	// ssize_t bytes_read;
	// line = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	// if (!line) {
	//     write(2, "Error de memoria\n", 17);
	//     return (1);
	// }
	// fd = open("texto.txt", O_RDONLY);
	// if (fd < 0) {
	//     write(2, "Error al abrir archivo\n", 23);
	//     free(line);
	//     return (1);
	// }
	// bytes_read = read(fd, line, BUFFER_SIZE);
	// if (bytes_read < 0) {
	//     write(2, "Error al leer archivo\n", 22);
	//     close(fd);
	//     free(line);
	//     return (1);
	// }
	// line[bytes_read] = '\0';
	// write(1, line, ft_strlen(line));
	// close(fd);
	// free(line);
	// return (0);
	fd = open("texto.txt", O_RDONLY);
	char *newline = get_next_line(fd);
	while(newline){
		printf("%s", newline);
		free(newline);
		newline = get_next_line(fd);
	}
	free(newline);
	close(fd);
}
