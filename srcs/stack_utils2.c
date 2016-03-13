/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngrasset <ngrasset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/13 16:10:12 by ngrasset          #+#    #+#             */
/*   Updated: 2016/03/13 17:06:34 by ngrasset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void		delete_stack(t_stack *head)
{
	t_stack		*elem;
	t_stack		*next;

	elem = head;
	while (elem)
	{
		next = elem->next;
		free(elem);
		elem = next;
	}
}

void		put_stack(t_stack *elem)
{
	if (!elem)
		ft_putendl("(empty)");
	while (elem)
	{
		ft_putnbr(elem->content);
		ft_putchar('\n');
		elem = elem->next;
	}
}

int			is_stack_ordered(t_stack *s)
{
	while (s)
	{
		if (s->next && s->next->content < s->content)
			return (0);
		s = s->next;
	}
	return (1);
}

int			stack_has_double(t_stack *s)
{
	t_stack		*next;

	while (s)
	{
		next = s->next;
		while (next)
		{
			if (next->content == s->content)
				return (1);
			next = next->next;
		}
		s = s->next;
	}
	return (0);
}

void	print_stacks(t_stack *stack_a, t_stack *stack_b)
{
	ft_putendl("\n===========================\n");
	ft_putendl("stack_a");
	put_stack(stack_a);
	ft_putendl("\n===========================\n");
	ft_putendl("stack_b");
	put_stack(stack_b);
	ft_putendl("\n===========================");
}
