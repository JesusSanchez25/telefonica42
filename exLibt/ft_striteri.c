/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 20:07:41 by marvin            #+#    #+#             */
/*   Updated: 2024/10/09 20:07:41 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (i < ft_strlen(s))
	{
		f(i, &s[i]);
		i++;
	}
	s[i] = '\0';
}

// void	to_upper(unsigned int i, char *c)
// {
// 	(void)i;          // Ignorar el índice en este ejemplo
// 	*c = toupper(*c); // Convertir a mayúscula
// }
// int	main(int argc, char const *argv[])
// {
// 	char	*str;

// 	str = "Hola, mundo!";
// 	ft_striteri(str, to_upper);
// 	printf("Cadena modificada: %s\n", str);
// 	return (0);
// }
