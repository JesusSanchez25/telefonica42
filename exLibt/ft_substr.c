/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 21:00:12 by marvin            #+#    #+#             */
/*   Updated: 2024/10/07 21:00:12 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*strfinal;
	size_t			i;
	size_t			s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	strfinal = malloc((sizeof(char) * len) + 1);
	if (!strfinal)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		strfinal[i] = s[start + i];
		i++;
	}
	strfinal[i] = '\0';
	return (strfinal);
}

// int main() {
//     char *str = "Hola mundo!";
//     char *substr;

//     // Caso 1: Extraer "mundo"
//     substr = ft_substr(str, 7, 5);
//     printf("Subcadena 1: %s\n", substr);
//     free(substr); // Liberar la memoria

//     // Caso 2: Extraer "programación" (pero con un tamaño menor)
//     substr = ft_substr(str, 13, 10);
//     printf("Subcadena 2: %s\n", substr);
//     free(substr);

//     // Caso 3: Índice de inicio fuera de rango
//     substr = ft_substr(str, 30, 5);
//     printf("Subcadena 3: %s\n", substr);
//     free(substr); // Aunque sea una cadena vacía, debemos liberarla

//     // Caso 4: Longitud demasiado grande
//     substr = ft_substr(str, 0, 100);
//     printf("Subcadena 4: %s\n", substr);
//     free(substr);

//     return 0;
// }
