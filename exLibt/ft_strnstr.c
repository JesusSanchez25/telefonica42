/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 22:51:45 by marvin            #+#    #+#             */
/*   Updated: 2024/09/25 22:51:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *strBig, const char *strSml, size_t n)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < n || strBig[i])
	{
		if (strSml[i] == strBig[j])
			j++;
		else
			j = 0;
		if (!strBig[j])
			return ((char *)&strBig[i - j]);
		i++;
	}
	return (NULL);
}

int main() {
	char str[] = "Hola, mundo. Esto es una prueba.";
	char *ptr;

	ptr = ft_strnstr(str, "mundo", 10);
	if (ptr != NULL) {
		printf("La subcadena 'mundo' fue encontrada en: %s\n", ptr);
	} else {
		printf("La subcadena no fue encontrada.\n");
	}

	return 0;
}
