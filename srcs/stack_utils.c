/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngrasset <ngrasset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/12 23:26:58 by ngrasset          #+#    #+#             */
/*   Updated: 2016/03/13 00:57:35 by ngrasset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

t_stack		*stack_new_elem(int a)
{
	t_stack	*new;

	if (!(new = malloc(sizeof(t_stack))))
		return (NULL);
	new->next = NULL;
	new->previous = NULL;
	new->content = a;
	return (new);
}

void		stack_push_elem_back(t_stack **head, t_stack *new)
{
	t_stack		*cur;

	if (!*head)
		return ((void)(*head = new));
	cur = *head;
	while (cur->next)
		cur = cur->next;
	cur->next = new;
	new->previous = cur;
}

void		stack_push_elem_front(t_stack **head, t_stack *new)
{
	t_stack		*cur;

	if (!*head)
		return ((void)(*head = new));
	cur = *head;
	new->next = cur;
	cur->previous = new;
	new->previous = NULL;
	*head = new;
}

t_stack		*stack_pop_elem_back(t_stack **head)
{
	t_stack		*cur;

	if (!*head)
		return (NULL);
	cur = *head;
	if (!cur->next)
	{
		*head = NULL;
		return (cur);
	}
	while (cur->next)
		cur = cur->next;
	if (cur->previous)
		cur->previous->next = NULL;
	cur->previous = NULL;
	return (cur);
}

t_stack		*stack_pop_elem_front(t_stack **head)
{
	t_stack		*cur;

	if (!*head)
		return (NULL);
	cur = *head;
	*head = cur->next;
	cur->next= NULL;
	cur->previous = NULL;
	if (*head)
		(*head)->previous = NULL;
	return (cur);
}

void		put_stack(t_stack *elem)
{
	while (elem)
	{
		ft_putnbr(elem->content);
		ft_putchar('\n');
		elem = elem->next;
	}
}
