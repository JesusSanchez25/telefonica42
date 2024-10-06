/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 17:41:14 by marvin            #+#    #+#             */
/*   Updated: 2024/09/25 17:41:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (src[count])
		count++;
	if (!dest || !src || !size)
		return (count);
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (count);
}

// int	main(void)
// {
// 	char		dest[10];
// 	const char	*fuente = NULL;

// 	// Copia como máximo 9 caracteres (dejando espacio para el nulo)
// 	ft_strlcpy(dest, fuente, sizeof(dest));
// 	printf("Destino: %s\n", dest); // Imprimirá: Hola, m
// 	return (0);
// }
