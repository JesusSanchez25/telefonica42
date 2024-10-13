/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 18:58:48 by marvin            #+#    #+#             */
/*   Updated: 2024/09/29 18:58:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strdup(const char *s)
{
	char	*str;
	int		i;

	i = 0;
	str = malloc(sizeof(char) * (strlen(s) + 1));
	if (!s || !str)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

// int	main(void)
// {
// 	char	str[] = "Hola, mundo!";
// 	char	*dup;

// 	dup = ft_strdup(str);
// 	if (dup == NULL)
// 	{
// 		printf("Error al duplicar la cadena.\n");
// 		return (1);
// 	}
// 	printf("Cadena original: %s\n", str);
// 	printf("Cadena duplicada: %s\n", dup);
// 	free(dup);
// 	return (0);
// }
