/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 20:14:35 by marvin            #+#    #+#             */
/*   Updated: 2024/10/09 20:14:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
// int	main(void)
// {
// 	char	character;
// 	int		file_descriptor;

// 	character = 'A';
// 	file_descriptor = 1;
// 	// Descriptor de archivo estándar de salida (stdout)
// 	ft_putchar_fd(character, file_descriptor);
// 	return (0);
// }
