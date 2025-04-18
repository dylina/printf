/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgorceac <dgorceac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 10:32:49 by dgorceac          #+#    #+#             */
/*   Updated: 2025/04/16 15:46:43 by dgorceac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	wordcount(char const *s, char c)
{
	size_t	count;

	if (!*s)
		return (0);
	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	size_t	wordlen;
	int		i;
	char	**str;

	i = 0;
	str = (char **)malloc(sizeof(char *) * (wordcount(s, c) + 1));
	if (!s || !str)
		return (NULL);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				wordlen = ft_strlen(s);
			else
				wordlen = ft_strchr(s, c) - s;
			str[i++] = ft_substr(s, 0, wordlen);
			s = s + wordlen;
		}
	}
	str[i] = NULL;
	return (str);
}
// int main(void)
// {
//     char **result = ft_split("salu vcgd", ' ');
// 	int i = 0;
//     while (result[i])
//         printf("%s\n", result[i++]);
//     return 0;
// }
