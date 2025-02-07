/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-chd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:05:55 by jait-chd          #+#    #+#             */
/*   Updated: 2024/11/16 18:18:06 by jait-chd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dlen;
	size_t	slen;

	i = 0;
	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	if (dlen >= size)
		return (slen + size);
	j = dlen;
	while (src[i] != '\0' && j < size - 1)
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	dst[j] = '\0';
	return (dlen + slen);
}
/*#include <stdio.h>
int	main(int c, char **v)
{
	if (c > 1)
	{
		printf("%ld", ft_strlcat(v[1], v[2], v[3][0]));
	}
	//printf("%s",strlcat(d,s,9));       
}*/
