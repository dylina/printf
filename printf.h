/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgorceac <dgorceac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 16:29:52 by dgorceac          #+#    #+#             */
/*   Updated: 2025/04/22 17:44:17 by dgorceac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

#include "libft/libft.h"
#include <stdarg.h>

int	ft_printf(const char *str, ...);
int	ft_putchar(char c);
int	ft_nbr_fd(int n, int fd);
int	ft_str_fd(char *s, int fd);
int	ft_unsigned(unsigned int n);
int	ft_hex_ptr(int ptr);

#endif
