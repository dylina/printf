/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgorceac <dgorceac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 16:21:43 by dgorceac          #+#    #+#             */
/*   Updated: 2025/04/18 16:21:57 by dgorceac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdio.h>

static int	check_format(char str, va_list args)
{
	int i;

	i = 0;
	if (str == 'c')
		write (1, (char[]){va_arg(args, int)}, 1);
	else if (str == 's')
		write (1, (char[]){va_arg(args, int)}, 1);
	// else if (str == 'p')
	// else if (str == 'd')
	// else if (str == 'i')
	// else if (str == 'u')
	// else if (str == 'x')
	// else if (str == 'X')
	// else if (str == '%')

}

int	ft_printf(const char *str, ...)
{
	int	i;
	int	count;
	va_list args;

	i = 0;
	count = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			count += check_format(str[i + 1], args);
			i++;
		}
		else
		{
			write(1, &str[i], 1);
			count++;
		}
	i++;
	}
	va_arg(args, char *);
	va_end(args);
	printf("count: %d\n", count);
	return (count);
}
int	main(void)
{
	ft_printf("am :%d ani si ma numesc :%s", 1, "Dumi");
	return (0);
}
