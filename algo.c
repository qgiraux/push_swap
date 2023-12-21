/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qgiraux <qgiraux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 12:01:19 by qgiraux           #+#    #+#             */
/*   Updated: 2023/12/21 15:27:17 by qgiraux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//nombre d'operations de type rr ou rrr
int ft_min(int a, int b)
{
	if (a < b)
		return (a);
	return (b);
}
// calculer l'index precedent
int bm1(int rankb, int b)
{
	if (rankb == 0)
		return (b - 1);
	return(rankb - 1);

}

// trouver l'index du plus petit nombre de pile 2
int maxfullb(int *pile, int b)
{
	int	r;
	int	i;
	
	r = 0;
	i = 0;
	while (++r < b)
		if(pile[r] > pile[i])
			i = r;
	return (i);
}
// trouver l'index du plus grand nombre de pile 2
int minfullb(int *pile, int b)
{
	int	r;
	int	i;
	
	r = 0;
	i = 0;
	while (++r < b)
		if(pile[r] < pile[i])
			i = r;
	return (i);
}

int	**algo(t_tab t)
{
	t_algo x;
	
	t = pb(pb(t));
//tant qu'il y a des valeurs dans la pile 1
while (t.a > 0)
{
// pour chaque r1
	x.r1 = -1;
	x.speed = t.a + t.b + 3; //au debut, on siat que ca ne prendra pas plus de tab.a + 3 mouvements pour sortir a
	while (++x.r1 < t.a)
	{
		x.r2 = 0;
		//trouver le placement de a dans b
		//si a est superieur a toute la pile 2, on lock r2 sur maxfullb
		if (t.pile[0][x.r1] > t.pile[1][maxfullb(t.pile[1], t.b)])
				x.r2 = maxfullb(t.pile[1], t.b);
		//si a est inferieur a toute la pile 2, on lock r2 sur minfullb
		else if (t.pile[0][x.r1] < t.pile[1][minfullb(t.pile[1], t.b)])
				x.r2 = maxfullb(t.pile[1], t.b);
		//sinon on cherche l'indice de pile 2 pour lequel a est superieur, mais b-1 est inferieur
		else
			while(t.pile[0][x.r1] > t.pile[1][bm1(x.r2, t.b)] || t.pile[0][x.r1] < t.pile[1][x.r2])
				x.r2++;

		//maintenant on calcule la vitesse
			//si on sort a par le bas et b par le bas
		if (x.r1 + x.r2 - ft_min(x.r1, x.r2) < x.speed)
		{
			x.speed = x.r1 + x.r2 - ft_min(x.r1, x.r2);
			x.exit = 1;
			x.br1 = x.r1;
			x.br2 = x.r2;
		}
			//si on sort a par le bas et b par le haut
		if (x.r1 + (t.b - x.r2) < x.speed)
		{
			x.speed = x.r1 + (t.b - x.r2);
			x.exit = 2;
			x.br1 = x.r1;
			x.br2 = x.r2;
		}
			//si on sort a par le haut et b par le bas
		if ((t.a - x.r1) + x.r2 < x.speed)
		{
			x.speed = (t.a - x.r1) + x.r2;
			x.exit = 3;
			x.br1 = x.r1;
			x.br2 = x.r2;
		}
			//si on sort a par le haut et b par le haut
		if ((t.a - x.r1) + (t.b - x.r2) - ft_min((t.a - x.r1), (t.b - x.r2)) < x.speed)
		{
			x.speed = (t.a - x.r1) + (t.b - x.r2) - ft_min((t.a - x.r1), (t.b - x.r2));
			x.exit = 4;
			x.br1 = x.r1;
			x.br2 = x.r2;
		}
	}
	//on a desormais le meilleur indice a sortir et le b a modifier en fonction, ainsi que le type d'operation a faire
	//printf("case = %d r1 = %d r2 = %d\n",x.exit, x.br1, x.br2);
	t = algo_moves(t, x);
	//printer(t.pile[0], t.a);
	//printer(t.pile[1], t.b);
}

// on met max pile b au debut de pile b
x.r2 = maxfullb(t.pile[1], t.b);
if (x.r2 < t.b - x.r2)
	while (x.r2-- > 0)
		t = rb(t);
else
	while (x.r2++ < t.b)
		t = rrb(t);

// on rebascule pile b dans pile a
while (t.b > 0)
	t = pa(t);

	//printer(t.pile[0], t.a);

return (t.pile);	
	
}