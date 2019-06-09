/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_rem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 11:34:48 by ohachim           #+#    #+#             */
/*   Updated: 2019/05/26 06:51:45 by ohachim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printfh.h"

void	ft_putchar_rem(char c, t_rem *rems)
{
	ft_putchar(c);
	rems->cursor += 1;
	rems->counter += 1;
}
