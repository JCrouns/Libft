/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-chd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 21:27:41 by jait-chd          #+#    #+#             */
/*   Updated: 2024/11/18 11:49:24 by jait-chd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i++;
	}
	if (s[i] == (char )c)
		return ((char *)(s + i));
	return (0);
}
/*#include <stdio.h>
#include <string.h>
int	main(int c, char **v)
{
		char a[] = "jamal";
		int b = 'b';
		ft_strchr(a,b);
	printf("%s", ft_strchr(a,b));
	// ft_strchr("Hello, world!", 'w');
}*/
