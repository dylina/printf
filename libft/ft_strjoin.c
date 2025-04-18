/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgorceac <dgorceac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 17:20:03 by dgorceac          #+#    #+#             */
/*   Updated: 2025/04/10 14:17:23 by dgorceac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned char	*new;
	size_t			i;
	size_t			j;
	size_t			len1;
	size_t			len2;

	i = 0;
	j = 0;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	new = (unsigned char *) malloc(sizeof(char) * (len1 + len2 + 1));
	if (!new)
		return (NULL);
	while (i < len1)
	{
		new[i] = s1[i];
		i++;
	}
	while (j < len2)
	{
		new[i + j] = s2[j];
		j++;
	}
	new[i + j] = '\0';
	return ((char *) new);
}
// int	main(void)
// {
// 	char const *s1 = NULL;
// 	char const s2[] = "you!";

// 	printf("%s", ft_strjoin(s1, s2));
// 	return (0);
// }
