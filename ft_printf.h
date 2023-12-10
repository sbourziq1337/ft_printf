/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbourziq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 18:31:44 by sbourziq          #+#    #+#             */
/*   Updated: 2023/11/27 11:32:42 by sbourziq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
void	ft_putchar(char ptr, int *len);
void	ft_putstr(char *str, int *len);
void	ft_hexadecimal(unsigned long int decimal, int *len);
void	ft_putnbr(int n, int *len);
void	ft_putnbrunsigned(unsigned int n, int *len);
void	ft_print_hex(unsigned int low, char str, int *len);

#endif
