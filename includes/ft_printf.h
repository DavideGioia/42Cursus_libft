/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgioia <dgioia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 16:53:02 by dgioia            #+#    #+#             */
/*   Updated: 2022/04/05 16:55:59 by dgioia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdint.h>

int				ft_printf(const char *str, ...);
int				ft_putchar(char *c);
int				ft_putstr(const char *str);
int				ft_countnbr(int nbr);
int				ft_print_ptr(unsigned long long ptr);
int				ft_printhex(unsigned int nbr, const char str);
void			ft_write(char c);
void			ft_putunbr(unsigned int nbr);
int				ft_countunbr(unsigned int nbr);

#endif