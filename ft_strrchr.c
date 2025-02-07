/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-chd <jait-chd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 02:35:05 by jait-chd          #+#    #+#             */
/*   Updated: 2024/11/16 21:37:17 by jait-chd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	j;

	i = 0;
	j = -1;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			j = i;
		i++;
	}
	if (j != -1)
		return ((char *)&s[j]);
	else if (s[i] == (char )c)
		return ((char *)&s[i]);
	return (0);
}
/*#include <stdio.h>
#include <string.h>
int main () {
	 char a[] = "jamal";
	printf("%s",ft_strrchr(a,'x'));
	//	printf("%s",strrchr(a,'x'));
}*/
