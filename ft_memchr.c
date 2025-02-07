/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-chd <jait-chd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 14:22:08 by jait-chd          #+#    #+#             */
/*   Updated: 2024/11/16 21:04:58 by jait-chd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*p = s;

	i = 0;
	while (i < n)
	{
		if (p[i] == (char)c)
			return ((void *)&p[i]);
		i++;
	}
	return (0);
}
/*#include <stdio.h>
int	main(int c, char **v)
{
	void	*r;

	if (c > 1)
	{
		r = ft_memchr(v[1], v[2][0], 5);
		printf("%s", (char *)r);
	}
}*/
