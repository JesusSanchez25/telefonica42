/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 19:56:05 by marvin            #+#    #+#             */
/*   Updated: 2024/10/09 19:56:05 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char				*str;
	long unsigned int	i;

	i = 0;
	str = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!s || !f || !str)
		return (NULL);
	while (i < ft_strlen(s))
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// char	uppercase(unsigned int i, char c)
// {
// 	(void)i;             // Ignorar el índice en este ejemplo
// 	return (toupper(c)); // Convertir a mayúscula
// }

// int	main(void)
// {
// 	char	*str;
// 	char	*result;

// 	str = "Hola, mundo!";
// 	result = ft_strmapi(str, uppercase);
// 	printf("Cadena original: %s\n", str);
// 	printf("Cadena transformada: %s\n", result);
// 	return (0);
// }
