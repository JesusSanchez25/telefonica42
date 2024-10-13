/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 20:04:35 by marvin            #+#    #+#             */
/*   Updated: 2024/10/08 20:04:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

static size_t	contar_palabras(char const *s, char c)
{
	size_t	cnt;
	int		in_word;

	cnt = 0;
	in_word = 0;
	while (*s != '\0')
	{
		if (*s != c && in_word == 0)
		{
			cnt++;
			in_word = 1;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (cnt);
}

static char	**liberar_memoria(char **arr)
{
	size_t	i;

	if (!arr)
		return (NULL);
	i = 0;
	while (arr[i] != NULL)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**finalarraystr;
	int		in_word;
	int		i;
	int		word_start;
	int		word_index;
	int		length;

	if (!s)
		return (NULL);
	finalarraystr = malloc(sizeof(char *) * (contar_palabras(s, c) + 1));
	if (!finalarraystr)
		return (NULL);
	i = 0;
	word_index = 0;
	in_word = 0;
	while (s[i])
	{
		if (s[i] != c && in_word == 0)
		{
			word_start = i;
			in_word = 1;
		}
		if ((s[i] == c || s[i + 1] == '\0') && in_word == 1)
		{
			length = (s[i] == c) ? i - word_start : i - word_start + 1;
			finalarraystr[word_index] = ft_substr(s, word_start, length);
			if (!finalarraystr[word_index])
				return (liberar_memoria(finalarraystr));
			word_index++;
			in_word = 0;
		}
		i++;
	}
	finalarraystr[word_index] = NULL;
	return (finalarraystr);
}

// Comprobar contar palabras
// int main(int argc, char const *argv[])
// {
// 	char *str1 = "camioenta";
// 	char *str2 = "camioenta con patas";
// 	char *str3 = "123 123 123 321";
// 	char *str4 = "          123dasfsd       ";
// 	char *str5 = "  adsf  adsf asdfa     adf as   ";
// 	char *str6 = " 1 1 111111";
// 	printf("El string -%s- ha pasado a -%ld-\n", str1, contar_palabras(str1,
// ' '));
// // 	printf("El string: -%s- ha pasado a :-%ld-\n", str2,
// 		contar_palabras(str2,
// ' '));
// // 	printf("El string: -%s- ha pasado a :-%ld-\n", str3,
// 		contar_palabras(str3,
// ' '));
// // 	printf("El string: -%s- ha pasado a :-%ld-\n", str4,
// 		contar_palabras(str4,
// ' '));
// // 	printf("El string: -%s- ha pasado a :-%ld-\n", str5,
// 		contar_palabras(str5,
// ' '));
// // 	printf("El string: -%s- ha pasado a :-%ld-\n", str6,
// 		contar_palabras(str6,
// ' '));
// 	return (0);
// 	return (0);
// }

// int	main(void)
// {
// 	char	*str;
// 	char	**words;
// 	int		i;

// 	str = "Hello, World como me gusta comer!";
// 	words = ft_split(str, ' ');
// 	if (words != NULL)
// 	{
// 		i = 0;
// 		while (words[i] != NULL)
// 		{
// 			printf("%s\n", words[i]);
// 			i++;
// 		}
// 	}
// 	else
// 	{
// 		printf("Memory allocation failed.\n");
// 	}
// 	return (0);
// }
