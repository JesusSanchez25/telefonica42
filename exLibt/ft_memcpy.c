/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 17:24:29 by marvin            #+#    #+#             */
/*   Updated: 2024/09/25 17:24:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, unsigned long n)
{
	unsigned long	i;

	if (dest == src || n == 0)
		return (dest);
	i = 0;
	while (i < n)
	{
		*((char *)dest + i) = *((char *)src + i);
		i++;
	}
	return (dest);
}

// int	main() {
// 	char cadena1[] = "Hola, mundo!";
// 	char cadena2[] = "";

// 	// Copiamos 13 bytes (la longitud de "Hola, mundo!")
// 	ft_memcpy(cadena2, cadena1, '\0');

// 	printf("Cadena copiada: %s\n", cadena2);
// 	return 0;
// }
