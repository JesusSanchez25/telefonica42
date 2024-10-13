/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 20:22:37 by marvin            #+#    #+#             */
/*   Updated: 2024/10/09 20:22:37 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}

// int	main(void)
// {
// 	char	*message;
// 	int		file_descriptor;

// 	message = "Hola, mundo!";
// 	file_descriptor = 1;
// 	// Descriptor de archivo estándar de salida (stdout)
// 	ft_putstr_fd(message, file_descriptor);
// 	return (0);
// }
