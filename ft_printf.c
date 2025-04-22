/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgorceac <dgorceac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 16:21:43 by dgorceac          #+#    #+#             */
/*   Updated: 2025/04/22 17:44:28 by dgorceac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdio.h>

static int	check_format(char str, va_list args)
{
	if (str == 'c')
		write (1, (char[]){va_arg(args, int)}, 1);
	else if (str == 's')
		ft_str_fd(va_arg(args, char*), 1);
	else if (str == 'd' || str == 'i')
		ft_nbr_fd(va_arg(args, int), 1);
	else if (str == 'u')
		ft_unsigned(va_arg(args, int));
	else if (str == 'p')
		ft_hex_ptr(va_arg(args, int));

	// else if (str == 'x')

	// else if (str == 'X')

	else if (str == '%')
		write(1, &str, 1);
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
	int x = 10;
	int *p = &x;

	ft_printf("am :%d ani %% si luni %i si ma numesc :%s anul: %u si %u adresa:%p\n", 1, 55, "Dumi", 000, 215, (void *)&x);
	return (0);
}
