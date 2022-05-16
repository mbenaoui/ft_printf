/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenaoui <mbenaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 15:18:27 by mbenaoui          #+#    #+#             */
/*   Updated: 2021/12/02 17:15:44 by mbenaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_putchar(char c);
int	ft_pustr(char *s);
int	ft_hexadecimal(unsigned int nb);
int	ft_hexadx(unsigned int nb);
int	ft_putnbr(int n);
int	ft_unsigned_nbr(unsigned int n);
int	ft_p(unsigned long int nb);
int	ft_printf(const char *s, ...);

#endif
