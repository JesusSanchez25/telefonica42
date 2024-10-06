/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 22:22:36 by marvin            #+#    #+#             */
/*   Updated: 2024/09/25 22:22:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
		{
			return ((void *)&((unsigned char *)s)[i]);
		}
		i++;
	}
	return (NULL);
}

// int main() {
// 		unsigned char data[] = {1, 2, 3, 4, 5, 3};
// 		unsigned char *ptr;

// 		ptr = (unsigned char *)ft_memchr(data, 2, sizeof(data) + 10);
// 		if (ptr != NULL) {
// 				printf("El byte elegido fue encontrado" +
//	" en el indice %ld\n", ptr - data);
// 		} else {
// 				printf("El byte elegido no fue encontrado.\n");
// 		}

// 		return (0);
// }
