/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   regles_1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qgiraux <qgiraux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 11:02:14 by qgiraux           #+#    #+#             */
/*   Updated: 2023/12/18 17:35:55 by qgiraux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_tab	sa(t_tab tab)
{
	int	tmp;

	tmp = tab.pile[0][1];
	tab.pile[0][1] = tab.pile[0][0];
	tab.pile[0][0] = tmp;
	write(1, "sa\n", 3);
	return (tab);
}

t_tab	sb(t_tab tab)
{
	int	tmp;

	tmp = tab.pile[1][1];
	tab.pile[1][1] = tab.pile[1][0];
	tab.pile[1][0] = tmp;
	write(1, "sb\n", 3);
	return (tab);
}

t_tab	ss(t_tab tab)
{
	int	tmp;

	tmp = tab.pile[0][1];
	tab.pile[0][1] = tab.pile[0][0];
	tab.pile[0][0] = tmp;
	tmp = tab.pile[1][1];
	tab.pile[1][1] = tab.pile[1][0];
	tab.pile[1][0] = tmp;
	write(1, "ss\n", 3);
	return (tab);
}

t_tab	pa(t_tab tab)
{
	int	n;
	int	m;

	n = tab.a;
	while (--n >= 0)
		tab.pile[0][n + 1] = tab.pile[0][n];
	tab.pile[0][0] = tab.pile[1][0];
	while (++n < tab.b)
		tab.pile[1][n] = tab.pile[1][n + 1];
	tab.pile[1][n] = 0;
	write (1, "pa\n", 3);
	tab.a++;
	tab.b--;
	return (tab);
}

t_tab	pb(t_tab tab)
{
	int	n;
	int	m;

	n = tab.b;
	while (--n >= 0)
		tab.pile[1][n + 1] = tab.pile[1][n];
	tab.pile[1][0] = tab.pile[0][0];
	while (++n < tab.a)
		tab.pile[0][n] = tab.pile[0][n + 1];
	tab.pile[0][n] = 0;
	write (1, "pb\n", 3);
	tab.b++;
	tab.a--;
	return (tab);
}

t_tab	ra(t_tab tab)
{
	int	temp;
	int	n;

	temp = tab.pile[0][0];
	n = 0;
	while (++n < tab.a)
		tab.pile[0][n - 1] = tab.pile[0][n];
	tab.pile[0][n - 1] = temp;
	write (1, "ra\n", 3);
	return (tab);
}

t_tab	rb(t_tab tab)
{
	int	temp;
	int	n;

	temp = tab.pile[1][0];
	n = 0;
	while (++n <= tab.b)
		tab.pile[1][n - 1] = tab.pile[1][n];
	tab.pile[1][n - 1] = temp;
	write (1, "rb\n", 3);
	return (tab);
}

t_tab	rr(t_tab tab)
{
	int	temp;
	int	n;

	temp = tab.pile[0][0];
	n = 0;
	while (++n < tab.a)
		tab.pile[0][n - 1] = tab.pile[0][n];
	tab.pile[0][n - 1] = temp;
	temp = tab.pile[1][0];
	n = 0;
	while (++n < tab.b)
		tab.pile[1][n - 1] = tab.pile[1][n];
	tab.pile[1][n - 1] = temp;
	write (1, "rr\n", 3);
	return (tab);
}

t_tab	rra(t_tab tab)
{
	int	temp;
	int	n;

	n = tab.a - 1;
	temp = tab.pile[0][n];
	while (--n >= 0)
		tab.pile[0][n + 1] = tab.pile[0][n];
	tab.pile[0][0] = temp;
	write (1, "rra\n", 4);
	return (tab);
}

t_tab	rrb(t_tab tab)
{
	int	temp;
	int	n;

	n = tab.b - 1;
	temp = tab.pile[1][n - 1];
	n--;
	while (--n >= 0)
		tab.pile[1][n + 1] = tab.pile[1][n];
	tab.pile[1][0] = temp;
	write (1, "rra\n", 4);
	return (tab);
}

t_tab	rrr(t_tab tab)
{
	int	temp;
	int	n;

	n = tab.a;
	temp = tab.pile[0][n - 1];
	n--;
	while (--n >= 0)
		tab.pile[0][n + 1] = tab.pile[0][n];
	tab.pile[0][0] = temp;
	n = tab.b;
	temp = tab.pile[1][n - 1];
	n--;
	while (--n >= 0)
		tab.pile[1][n + 1] = tab.pile[1][n];
	tab.pile[1][0] = temp;
	write (1, "rrr\n", 4);
	return (tab);
}
