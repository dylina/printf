/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgorceac <dgorceac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 10:53:14 by dgorceac          #+#    #+#             */
/*   Updated: 2025/04/08 14:29:37 by dgorceac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *source)
{
	size_t	len;
	char	*ptr;
	size_t	i;

	i = 0;
	len = 0;
	while (source[len] != '\0')
		len++;
	ptr = (char *) malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	while (i <= len)
	{
		ptr[i] = source[i];
		i++;
	}
	return (ptr);
}
