/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-chd <jait-chd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 21:25:10 by jait-chd          #+#    #+#             */
/*   Updated: 2024/11/15 21:28:59 by jait-chd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*src;
	size_t			i;

	i = 0;
	src = (unsigned char *)s;
	while (i < n)
	{
		src[i] = c;
		i++;
	}
	return (s);
}
/*int	main(void)
{
	int i;
	int  buff[3];
	ft_memset(buff,'a',sizeof(buff));
	for(i=0;i<5;i++) {
		printf("%d\n",buff[1]);
	}
}*/
