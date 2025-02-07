/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-chd <jait-chd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 21:31:52 by jait-chd          #+#    #+#             */
/*   Updated: 2024/11/16 20:58:01 by jait-chd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(long nb)
{
	int	i;

	i = 0;
	if (nb < 0)
	{
		nb *= -1;
		i++;
	}
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*dest;
	long	nb;

	nb = n;
	i = ft_len(nb);
	dest = malloc(sizeof(char) * (i + 1));
	if (!dest)
		return (NULL);
	dest[i--] = '\0';
	if (nb < 0)
	{
		dest[0] = '-';
		nb *= -1;
	}
	if (nb == 0)
		dest[0] = '0';
	while (nb > 0)
	{
		dest[i--] = '0' + (nb % 10);
		nb /= 10;
	}
	return (dest);
}
/*#include <stdio.h>
int main () {
	int a = -2147483648;
	printf("%s",ft_itoa(a));
	//free(a);
}*/
