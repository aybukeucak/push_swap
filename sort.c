/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayucak <ayucak@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 17:55:20 by ayucak            #+#    #+#             */
/*   Updated: 2024/01/13 17:55:21 by ayucak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>
#include <stdbool.h>

void	sort_three(t_base *s)
{
	if (s->a[0] > s->a[1] && s->a[0] < s->a[2] && s->a[1] < s->a[2])
		sa(s, true);
	if (s->a[0] > s->a[1] && s->a[0] > s->a[2] && s->a[1] > s->a[2])
	{
		sa(s, true);
		rra(s, true);
	}
	if (s->a[0] > s->a[1] && s->a[0] > s->a[2] && s->a[1] < s->a[2])
		ra(s, true);
	if (s->a[0] < s->a[1] && s->a[0] < s->a[2] && s->a[1] > s->a[2])
	{
		sa(s, true);
		ra(s, true);
	}
	if (s->a[0] < s->a[1] && s->a[0] > s->a[2] && s->a[1] > s->a[2])
		rra(s, true);
}

/**
 * @brief 
 * 
 * @fn check_sorted(): Sayilar sirali degilse devam edecek
 *  ki siralasin.
 * @param base 
 */
void	sort_stack(t_base *base)
{
	check_sorted(base);
	if (base->size_a == 2)
		sa(base, true);
	else if (base->size_a == 3)
		sort_three(base);
	else
		sort_many(base);
	free(base->a);
}
