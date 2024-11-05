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

static size_t	ft_countword(char const *s, char c)
{
	size_t	count;

	if (!*s)
		return (0);
	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

size_t	ft_get_word_len(char const *s, char c)
{
	if (ft_strchr(s, c))
		return (ft_strchr(s, c) - s);
	return (ft_strlen(s));
}

static void	ft_freelist(char **lst, int words)
{
	int	i;

	i = 0;
	while (i < words)
	{
		free(lst[i]);
		i++;
	}
	free(lst);
}

char	**ft_split(char const *s, char c)
{
	char	**lst;
	size_t	word_len;
	int		i;
	int		word_count;

	word_count = ft_countword(s, c);
	lst = (char **)malloc((word_count + 1) * sizeof(char *));
	if (!s || !lst)
		return (NULL);
	i = 0;
	while (*s && i < word_count)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			word_len = ft_get_word_len(s, c);
			lst[i] = ft_substr(s, 0, word_len);
			if (!lst[i++])
				return (ft_freelist(lst, i--), NULL);
			s += word_len;
		}
	}
	lst[i] = NULL;
	return (lst);
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
