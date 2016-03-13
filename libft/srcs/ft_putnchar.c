/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngrasset <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/03 17:07:43 by ngrasset          #+#    #+#             */
/*   Updated: 2016/03/03 23:01:57 by ngrasset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int		ft_putnchar(char c, int i)
{
	int		ret;

	ret = 0;
	while (i > 0)
	{
		ft_putchar(c);
		i--;
		ret++;
	}
	return (ret);
}
