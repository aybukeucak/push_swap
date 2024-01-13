/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayucak <ayucak@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 17:55:02 by ayucak            #+#    #+#             */
/*   Updated: 2024/01/13 17:55:03 by ayucak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>

void	sort_bubble(int *stack, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (stack[i] > stack[j])
			{
				tmp = stack[i];
				stack[i] = stack[j];
				stack[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

void	find_middle(int *pivot, int *stack, int size)
{
	int	i;
	int	*tmp;

	tmp = (int *)malloc(sizeof(int) * size);
	if (!tmp)
		return (print_error("Error\n", 1));
	i = -1;
	while (++i < size)
		tmp[i] = stack[i];
	sort_bubble(tmp, size);
	*pivot = tmp[size / 2];
	free(tmp);
}

int	find_small(int *stack, int size)
{
	int	i;
	int	small;

	small = 0;
	i = -1;
	while (++i < size)
		if (stack[i] < small)
			small = stack[i];
	return (small);
}

int	find_large(int *stack, int size)
{
	int	i;
	int	large;

	large = 0;
	i = -1;
	while (++i < size)
		if (stack[i] > large)
			large = stack[i];
	return (large);
}
