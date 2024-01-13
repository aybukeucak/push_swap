/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayucak <ayucak@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 17:52:35 by aybukeucak        #+#    #+#             */
/*   Updated: 2024/01/13 18:22:40 by ayucak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>
#include "libft/libft.h"

void	check_repeating(t_base *base)
{
	int	i;
	int	j;

	i = -1;
	while (++i < base->size_a)
	{
		j = i;
		while (++j < base->size_a)
			if (base->a[i] == base->a[j])
				print_error("Error\n", 1);
	}
}

int	ft_isspace(char chr)
{
	if ((chr >= 9 && chr <= 13) || chr == ' ')
		return (1);
	return (0);
}

void	check_number(char *arg)
{
	int	i;

	i = 0;
	while (ft_isspace(arg[i]))
		i++;
	if (arg[i] == '-' && !arg[i + 1])
		print_error("Error\n", 1);
	if (arg[i] == '-')
		i++;
	i--;
	while (arg[++i])
		if (!ft_isdigit(arg[i]))
			print_error("Error\n", 1);
}

int	is_sorted(int *stack_a, int size, int flag)
{
	int	i;

	i = 0;
	while ((flag == 0) && (++i < size))
		if (stack_a[i - 1] > stack_a[i])
			return (0);
	while ((flag == 1) && (++i < size))
		if (stack_a[i - 1] < stack_a[i])
			return (0);
	return (1);
}

void	check_sorted(t_base *base)
{
	int	i;

	i = -1;
	while (++i < base->size_a - 1)
		if (base->a[i] > base->a[i + 1])
			return ;
	exit(0);
}
