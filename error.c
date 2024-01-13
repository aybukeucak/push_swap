/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayucak <ayucak@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 17:55:06 by ayucak            #+#    #+#             */
/*   Updated: 2024/01/13 18:22:48 by ayucak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>
#include "libft/libft.h"

void	print_error(char *str, int err_num)
{
	ft_putstr_fd(str, 2);
	if (err_num != 0)
		exit(err_num);
}
