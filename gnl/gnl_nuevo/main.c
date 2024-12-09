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

// void *test_malloc(size_t size) {
// static int fail_count = 0;  // Controla cuándo fallar
// fail_count++;
// if (fail_count % 8 == 0) {  // Simula fallo cada 3 llamadas
//     printf("Simulated malloc failure\n");
//     return (NULL);
// }
//     return (malloc(size));
// }

// void *malloc(size_t size) {
//     static int fail_count = 0;
//     fail_count++;
//     if (fail_count % 3 == 0) {  // Simula fallo cada 3 llamadas
//         printf("Simulated malloc failure\n");
//         return (NULL);
//     }
//     void *(*original_malloc)(size_t) = dlsym(RTLD_NEXT, "malloc");
//     return (original_malloc(size));
// }

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
