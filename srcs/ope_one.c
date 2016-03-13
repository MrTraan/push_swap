/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ope_one.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngrasset <ngrasset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/13 00:14:53 by ngrasset          #+#    #+#             */
/*   Updated: 2016/03/13 00:57:14 by ngrasset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int		op_s(t_stack **s)
{
	t_stack		*elem;

	if (*s && (*s)->next)
	{
		elem = (*s)->next;
		(*s)->next = elem->next;
		(*s)->previous = elem;
		elem->previous = NULL;
		elem->next = *s;
		*s = elem;
		return (0);
	}
	return (1);
}

int		op_p(t_stack **from, t_stack **to)
{
	stack_push_elem_front(to, stack_pop_elem_front(from));
	return (0);
}

int		op_r(t_stack **s)
{
	t_stack	*elem;

	elem = stack_pop_elem_front(s);
	stack_push_elem_back(s, elem);
	return (0);
}

int		op_rr(t_stack **s)
{
	t_stack	*elem;

	elem = stack_pop_elem_back(s);
	stack_push_elem_front(s, elem);
	return (0);
}
