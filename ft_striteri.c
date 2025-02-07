/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-chd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 21:26:19 by jait-chd          #+#    #+#             */
/*   Updated: 2024/11/08 01:09:10 by jait-chd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}
/*void toupp(unsigned int index, char *c) {
	if (*c >= 'a' && *c <= 'z') {
		*c = *c - 32;
	}
}
int	main(void) {
	char str[] = "hello";
	ft_striteri(str, toupp);
	printf("%s", str);
}*/
