/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_seperate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayucak <ayucak@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 17:55:14 by ayucak            #+#    #+#             */
/*   Updated: 2024/01/13 17:55:15 by ayucak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	quicksort_a(t_base *stack, int len, int count)
{
	int	pivot_a;
	int	items;

	if (is_sorted(stack->a, len, 0) == 1)
		return ;
	if (len == 2)
		return (sort_small_a(stack));
	else if (len == 3 && stack->size_a == 3)
		return (sort_three(stack));
	else if (len == 3)
		return (sort_small_a2(stack, len));
	find_middle(&pivot_a, stack->a, len);
	items = len;
	while (len != items / 2 + items % 2)
	{
		if (stack->a[0] < pivot_a && (len--))
			pb(stack, 1);
		else if (++count)
			ra(stack, 1);
	}
	while (stack->size_a != items / 2 + items % 2 && count--)
		rra(stack, 1);
	quicksort_a(stack, items / 2 + items % 2, 0);
	quicksort_b(stack, items / 2, 0);
}

void	quicksort_b(t_base *stack, int len, int count)
{
	int	pivot_b;
	int	items;

	if (!count && is_sorted(stack->b, len, 1) == 1)
		while (len--)
			pa(stack, 1);
	if (len <= 3)
		return (sort_small_b(stack, len));
	find_middle(&pivot_b, stack->b, len);
	items = len;
	while (len != items / 2)
	{
		if (stack->b[0] >= pivot_b && (len--))
			pa(stack, 1);
		else if (++count)
			rb(stack, 1);
	}
	while (items / 2 != stack->size_b && count--)
		rrb(stack, 1);
	quicksort_a(stack, items / 2 + items % 2, 0);
	quicksort_b(stack, items / 2, 0);
}

void	sort_seperate(t_base *base)
{
	int	pivot_a;
	int	pivot_b;
	int	items;

	items = base->size_a;
	find_middle(&pivot_a, base->a, base->size_a);
	while (base->size_a != items / 2 + items % 2)
	{
		if (base->a[0] < pivot_a && base->size_a)
			pb(base, 1);
		else
		{
			find_middle(&pivot_b, base->b, base->size_b);
			if ((base->b[0] <= pivot_b) && (base->size_b > 2))
				rr(base, 1);
			else
				ra(base, 1);
		}
	}
	quicksort_a(base, items / 2 + items % 2, 0);
	quicksort_b(base, items / 2, 0);
}
