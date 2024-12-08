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
	int		fd;
	char	*newline;

	fd = open("texto.txt", O_RDONLY);
	newline = get_next_line(fd);
	while (newline)
	{
		printf("%s", newline);
		free(newline);
		newline = get_next_line(fd);
	}
	free(newline);
	close(fd);
}
