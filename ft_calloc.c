/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-chd <jait-chd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 21:22:31 by jait-chd          #+#    #+#             */
/*   Updated: 2024/11/15 20:45:44 by jait-chd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	void	*tmp;

	i = 0;
	tmp = malloc(nmemb * size);
	if (!tmp)
		return (NULL);
	while (i < (nmemb * size))
	{
		((unsigned char *)tmp)[i] = 0;
		i++;
	}
	return (tmp);
}
// #include <stdlib.h>
// #include <unistd.h>

// int	main(int argc, const char *argv[])
// {
// 	char	*str;

// 	alarm(5);
// 	if (argc == 1)
// 		return (0);
// 	else if (atoi(argv[1]) == 1)
// 	{
// 		str = (char *)ft_calloc(30, 1);
// 		if (!str)
// 			write(1, "NULL", 4);
// 		else
// 			write(1, str, 30);
// 	}
// 	return (0);
// }