/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-chd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 17:18:33 by jait-chd          #+#    #+#             */
/*   Updated: 2024/11/16 18:43:27 by jait-chd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (fd < 0)
		return ;
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = (n * -1);
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
		ft_putchar_fd(n + 48, fd);
}
/*int main(void)
{
	int fd = 1;

	ft_putnbr_fd(12345, fd);
	write(fd, "\n", 1);
	ft_putnbr_fd(-98765, fd);
	write(fd, "\n", 1);
	ft_putnbr_fd(0, fd);
	write(fd, "\n", 1);
	ft_putnbr_fd(-2147483648, fd);
	write(fd, "\n", 1);

	return (0);
}*/
