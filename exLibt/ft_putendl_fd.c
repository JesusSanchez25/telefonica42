/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 20:24:45 by marvin            #+#    #+#             */
/*   Updated: 2024/10/09 20:24:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s)
	{
		ft_putstr_fd(s, fd);
		ft_putchar_fd('\n', fd);
	}
}

// int	main(void)
// {
// 	char	*message;
// 	int		file_descriptor;

// 	message = "Este es un mensaje.";
// 	file_descriptor = 1;
// 	// Descriptor de archivo estándar de salida (stdout)
// 	ft_putendl_fd(message, file_descriptor);
// 	return (0);
// }
