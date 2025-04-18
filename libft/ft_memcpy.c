/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgorceac <dgorceac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 11:33:07 by dgorceac          #+#    #+#             */
/*   Updated: 2025/04/03 09:55:02 by dgorceac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (n--)
	{
		*d = *s;
		s++;
		d++;
	}
	return (dest);
}
// int 	main(void)
// {
// 	char dest[20];
// 	char src[] = "hello";

// 	ft_memcpy(dest, src, 13);
// 	printf("Dest: %s\n", dest);
// 	return (0);
// }
