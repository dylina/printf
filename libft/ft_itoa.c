/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgorceac <dgorceac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 16:23:33 by dgorceac          #+#    #+#             */
/*   Updated: 2025/04/16 15:48:10 by dgorceac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int n)
{
	int	len;

	len = 1;
	while (n / 10)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nb;
	int		len;
	int		negative;

	nb = n;
	negative = (nb < 0);
	if (negative)
		nb = -nb;
	len = ft_intlen(nb) + negative;
	str = malloc (sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (len--)
	{
		str[len] = nb % 10 + '0';
		nb = nb / 10;
	}
	if (negative)
		str[0] = '-';
	return (str);
}
// int	main(void)
// {
// 	printf("%s", ft_itoa(10));
// 	printf("%s", ft_itoa(-42));
// 	printf("%s", ft_itoa(0));
// 	printf("%s", ft_itoa(-2147483649));
// 	return (0);
// }
