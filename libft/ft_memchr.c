/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgorceac <dgorceac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 09:54:00 by dgorceac          #+#    #+#             */
/*   Updated: 2025/04/04 10:58:31 by dgorceac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if ((unsigned char)c == str[i])
			return (&str[i]);
		i++;
	}
	return (NULL);
}
// int	main(void)
// {
// 	unsigned char s[] = "hello";
// 	int c = 'k';
// 	printf("char: '%d', adr: %p\n", c, ft_memchr(s, c, 4));
// 	return (0);
// }
