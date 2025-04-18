/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgorceac <dgorceac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 14:42:30 by dgorceac          #+#    #+#             */
/*   Updated: 2025/04/09 17:15:49 by dgorceac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned char	*big;
	unsigned char	*new;
	size_t			i;
	size_t			str_len;

	if (!s)
		return (NULL);
	str_len = ft_strlen(s);
	if (start >= str_len)
		return (ft_strdup(""));
	if (start + len > str_len)
		len = str_len - (size_t) start;
	big = (unsigned char *) s;
	new = (unsigned char *) malloc(sizeof(char) * (len + 1));
	if (!new)
		return (NULL);
	i = 0;
	while (i < len)
	{
		new[i] = big[start + i];
		i++;
	}
	new[i] = '\0';
	return ((char *) new);
}
// int	main(void)
// {
// 	char const s[] = "coucou";
// 	size_t len = 3;

// 	printf("%s\n", ft_substr(s, 1, len));
// 	return (0);
// }
