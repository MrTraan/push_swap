/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   optimize_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngrasset <ngrasset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/13 17:13:18 by ngrasset          #+#    #+#             */
/*   Updated: 2016/03/13 17:20:05 by ngrasset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	optimize_stack(t_stack **a)
{
	t_stack		*elem;

	elem = *a;
	while (elem->next)
	{
		if (elem->next->content < elem->content)
	}
}