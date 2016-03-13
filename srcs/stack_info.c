/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_info.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngrasset <ngrasset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/13 00:53:33 by ngrasset          #+#    #+#             */
/*   Updated: 2016/03/13 01:00:37 by ngrasset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int		get_stack_size(t_stack *s)
{
	int		i;

	i = 0;
	while (s)
	{
		s = s->next;
		i++;
	}
	return (i);
}

int		get_stack_min(t_stack *s)
{
	int		min;

	if (!s)
		return (0);
	min = s->content;
	while (s)
	{
		if (s->content < min)
			min = s->content;
		s = s->next;
	}
	return (min);
}

int		get_stack_max(t_stack *s)
{
	int		max;

	if (!s)
		return (0);
	max = s->content;
	while (s)
	{
		if (s->content > max)
			max = s->content;
		s = s->next;
	}
	return (max);
}
