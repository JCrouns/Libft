/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-chd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 21:25:02 by jait-chd          #+#    #+#             */
/*   Updated: 2024/11/08 02:38:02 by jait-chd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;
	size_t			i;

	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	i = 0;
	if (dest == 0 && src == 0)
		return (NULL);
	if (dest > src)
	{
		while (n-- > 0)
			d[n] = s[n];
	}
	else
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}
/*#include <string.h>

int	main(void)
{
	unsigned char	s[] = "ABCD";
	unsigned char	d[5] = "DCBA";

	mmv(d, s, 4);
	// memmove(d,s,4);
	printf("%s\n", d);
	printf("%s", s);
}


int	main(void) {
	// Test case 1: Non-overlapping regions
	char source1[] = "Hello, World!";
	char destination1[20];
	mmv(destination1, source1, strlen(source1) + 1); //
		+1 to include null terminator
	printf("Test 1 - Non-overlapping: %s\n", destination1);

	// Test case 2: Overlapping regions
	char overlapping[] = "abcdef";
	mmv(overlapping + 2, overlapping, 4); // Move "abcd" to overlap
	printf("Test 2 - Overlapping: %s\n", overlapping); // Should print "ababcde"

	// Test case 3: No operation (zero length)
	char no_op[] = "No change";
	mmv(no_op, no_op, 0); // No operation
	printf("Test 3 - No operation: %s\n", no_op); // Should print "No change"

	return (0);
}
*/
