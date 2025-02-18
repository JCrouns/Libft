/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-chd <jait-chd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 21:29:39 by jait-chd          #+#    #+#             */
/*   Updated: 2024/11/17 03:33:34 by jait-chd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_counting(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static void	ft_start_end(const char *s, size_t *i, size_t *j, char c)
{
	*j = 0;
	while (s[*i] && s[*i] == c)
		(*i)++;
	while (s[*i + *j] && s[*i + *j] != c)
		(*j)++;
}

static char	**ft_free(char **r, size_t l)
{
	while (l > 0)
	{
		l--;
		free(r[l]);
	}
	free(r);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	l;
	size_t	count;
	char	**r;

	if (s == 0)
		return (0);
	i = 0;
	l = 0;
	count = ft_counting(s, c);
	r = (char **)malloc((count + 1) * sizeof(char *));
	if (r == NULL)
		return (NULL);
	while (l < count)
	{
		ft_start_end(s, &i, &j, c);
		r[l] = ft_substr(s, i, j);
		if (r[l] == 0)
			return (ft_free(r, l));
		i = i + j;
		l++;
	}
	r[count] = 0;
	return (r);
}

/*int main() {
	char str[] = "heeloo jamal from 42";
	char sep = ' ';
	char **result = ft_split(str, sep);
	if (result != NULL) {
		int i = 0;
		while (result[i] != NULL) {
			printf("Word %d: %s\n", i + 1, result[i]);
			free(result[i]);
			i++;
		}
		free(result);
	} else {
		printf("ERROR404\n");
	}

	return (0);
}*/
