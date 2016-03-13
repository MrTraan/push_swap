/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_info.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngrasset <ngrasset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/13 00:53:33 by ngrasset          #+#    #+#             */
/*   Updated: 2016/03/13 17:13:11 by ngrasset         ###   ########.fr       */
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

int		get_min_index(t_stack *s)
{
	int		min;
	int		index;
	int		i;

	index = 0;
	i = 0;
	if (!s)
		return (0);
	min = s->content;
	while (s)
	{
		if (s->content < min)
		{
			index = i;
			min = s->content;
		}
		i++;
		s = s->next;
	}
	return (index);
}
