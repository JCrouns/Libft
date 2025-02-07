/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-chd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 14:38:07 by jait-chd          #+#    #+#             */
/*   Updated: 2024/11/08 17:31:23 by jait-chd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_set(char s, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == s)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	i;
	size_t	start;
	size_t	len;
	char	*s;

	start = 0;
	if (s1 == 0 || set == 0)
		return (0);
	len = ft_strlen(s1);
	while (s1[start] && is_set(s1[start], set))
		start++;
	while (len > start && is_set(s1[len - 1], set))
		len--;
	s = (char *)malloc((len - start + 1) * sizeof(char));
	if (s == 0)
		return (0);
	i = 0;
	while (start + i < len)
	{
		s[i] = s1[start + i];
		i++;
	}
	s[len - start] = '\0';
	return (s);
}
/*int main (int c, char **v) {
	if (c > 1) {
		printf("%s",ft_strtrim(v[1],v[2]));
	}
}*/
