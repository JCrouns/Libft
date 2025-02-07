/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-chd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 21:26:43 by jait-chd          #+#    #+#             */
/*   Updated: 2024/11/16 18:41:13 by jait-chd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*cpy;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s1 && !s2)
		return (NULL);
	cpy = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!cpy)
		return (NULL);
	while (s1[i])
	{
		cpy[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		cpy[i] = s2[j];
		i++;
		j++;
	}
	cpy[i] = 0;
	return (cpy);
}
/*#include <stdio.h>
int main (int c,char **v) {
	if (c > 1) {
		printf("%s",ft_strjoin(v[1],v[2]));
	}

}*/
