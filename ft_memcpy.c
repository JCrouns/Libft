/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-chd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 21:22:52 by jait-chd          #+#    #+#             */
/*   Updated: 2024/11/07 09:44:06 by jait-chd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	if (dest == 0 && src == 0)
		return (dest);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
/*#include <string.h>

int	main(void)
{
	char	s[] = "hello";
	char	v[] = "hello";
	char	t[] = "";
	char	d[] = "";

	ft_memcpy(d, s, 2);
	memcpy(v, t, 2);
	printf("%s\n", d);
	printf("%s", t);
	return (0);
}*/
