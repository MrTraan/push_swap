/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ope_one.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngrasset <ngrasset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/13 00:14:53 by ngrasset          #+#    #+#             */
/*   Updated: 2016/03/13 16:06:43 by ngrasset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int		op_s(t_stack **s, char c1, char c2, char *flags)
{
	t_stack		*elem;

	if (flags[F_COLOR])
		ft_putstr("\x1B[30m");
	ft_putchar('s');
	ft_putchar(c1);
	ft_putchar(c2);
	if (flags[F_COLOR])
		ft_putstr("\x1B[0m");
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

int		op_pa(t_stack **from, t_stack **to, char c2, char *flags)
{
	if (flags[F_COLOR])
		ft_putstr("\x1B[31m");
	ft_putstr("pa");
	ft_putchar(c2);
	if (flags[F_COLOR])
		ft_putstr("\x1B[0m");
	stack_push_elem_front(to, stack_pop_elem_front(from));
	return (0);
}

int		op_pb(t_stack **from, t_stack **to, char c2, char *flags)
{
	if (flags[F_COLOR])
		ft_putstr("\x1B[32m");
	ft_putstr("pb");
	ft_putchar(c2);
	if (flags[F_COLOR])
		ft_putstr("\x1B[0m");
	stack_push_elem_front(to, stack_pop_elem_front(from));
	return (0);
}

int		op_r(t_stack **s, char c1, char c2, char *flags)
{
	t_stack	*elem;

	if (flags[F_COLOR])
		ft_putstr("\x1B[33m");
	ft_putchar('r');
	ft_putchar(c1);
	ft_putchar(c2);
	if (flags[F_COLOR])
		ft_putstr("\x1B[0m");
	elem = stack_pop_elem_front(s);
	stack_push_elem_back(s, elem);
	return (0);
}

int		op_rr(t_stack **s, char c1, char c2, char *flags)
{
	t_stack	*elem;

	if (flags[F_COLOR])
		ft_putstr("\x1B[34m");
	ft_putstr("rr");
	ft_putchar(c1);
	ft_putchar(c2);
	if (flags[F_COLOR])
		ft_putstr("\x1B[0m");
	elem = stack_pop_elem_back(s);
	stack_push_elem_front(s, elem);
	return (0);
}
