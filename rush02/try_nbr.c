/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   try_nbr.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rmazars <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/18 18:05:55 by rmazars      #+#   ##    ##    #+#       */
/*   Updated: 2019/08/18 18:24:58 by rmazars     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int	get_new_neb(long nbr)
{
	long i;

	i = 10;
	if (nbr > 20 && nbr < 100)
	{
		i = 10;
		while (i != 100 && i != nbr)
			i += 10;
		if (i == 100 && i != nbr)
			return (1);
	}
	else if (nbr > 100)
	{
		while (i <= nbr)
			i *= 10;
		if (nbr % (i / 10) != 0 || nbr / (i / 10) != 1)
			return (1);
	}
	return (0);
}
