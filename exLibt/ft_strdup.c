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
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(const char *s)
{
	char	*str;
	int		i;

	i = 0;
	str = malloc(sizeof(char) * strlen(s));
	while (s[i] != '\0')
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

// int main() {
// 	char str[] = "Hola, mundo!";
// 	char *dup;

// 	dup = ft_strdup(str);
// 	if (dup == NULL) {
// 		printf("Error al duplicar la cadena.\n");
// 		return 1;
// 	}

// 	printf("Cadena original: %s\n", str);
// 	printf("Cadena duplicada: %s\n", dup);

// 	free(dup);
// 	return 0;
// }
