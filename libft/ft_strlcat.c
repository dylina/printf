/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgorceac <dgorceac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 13:02:35 by dgorceac          #+#    #+#             */
/*   Updated: 2025/04/03 11:13:13 by dgorceac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;
	size_t	g;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	g = 0;
	i = dest_len;
	if (size == 0)
		return (src_len);
	if (size <= dest_len)
		return (size + src_len);
	while (g < size - dest_len - 1 && src[g])
	{
		dest[i] = src[g];
		g++;
		i++;
	}
	dest[i] = '\0';
	return (dest_len + src_len);
}
// int	main(void)
// {
// 	char dest[] = "hello ";
// 	const char src[] = "!";

// 	printf("before: %s\n", dest);
// 	ft_strlcat(dest, src, 10);
// 	printf("after: %s\n", dest);
// 	printf("return: %d\n", ft_strlcat(dest, src, 4));
// 	return (0);
// }
