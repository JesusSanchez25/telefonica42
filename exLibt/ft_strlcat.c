/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:03:13 by marvin            #+#    #+#             */
/*   Updated: 2024/09/25 18:03:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dest_len;
	size_t	src_len;

	j = 0;
	i = 0;
	src_len = 0;
	while (dest[i] != '\0' && i < size)
		i++;
	dest_len = i;
	while (src[src_len] != '\0')
		src_len++;
	if (size == 0 || dest_len >= size)
		return (size + src_len);
	while (src[j] != '\0' && dest_len + j < size - 1)
	{
		dest[dest_len + j] = src[j];
		j++;
	}
	if (dest_len + j < size)
		dest[dest_len + j] = '\0';
	return (dest_len + src_len);
}

// int main() {
// 	char destino[8] = "Hola, ";
// 	const char *fuente = "mundo!";

// 	// Concatena 'mundo!' a 'Hola, ' en el búfer 'destino'
// 	size_t nueva_longitud = ft_strlcat(destino, fuente, sizeof(destino));
// 	printf("Destino: %s\n", destino);
// 	printf("Longitud total (incluyendo nulo): %zu\n", nueva_longitud);

// 	return (0);
// }
