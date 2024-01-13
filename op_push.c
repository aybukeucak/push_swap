/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayucak <ayucak@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 17:54:52 by ayucak            #+#    #+#             */
/*   Updated: 2024/01/13 18:26:12 by ayucak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>

void	pa(t_base *base, bool print)
{
	int	i;

	if (base->size_b <= 0)
		return ;
	i = base->size_a;
	while (i > 0)
	{
		base->a[i] = base->a[i - 1];
		i--;
	}
	base->a[0] = base->b[0];
	base->size_b -= 1;
	while (i < base->size_b)
	{
		base->b[i] = base->b[i + 1];
		i++;
	}
	base->size_a += 1;
	if (print)
		write(1, "pa\n", 3);
}

void	pb(t_base *base, bool print)
{
	int	i;

	if (base->size_a <= 0)
		return ;
	i = base->size_b;
	while (i > 0)
	{
		base->b[i] = base->b[i - 1];
		i--;
	}
	base->b[0] = base->a[0];
	base->size_a -= 1;
	while (i < base->size_a)
	{
		base->a[i] = base->a[i + 1];
		i++;
	}
	base->size_b += 1;
	if (print)
		write(1, "pb\n", 3);
}
