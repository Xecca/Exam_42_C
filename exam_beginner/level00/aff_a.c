/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aponomar <aponomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 14:41:03 by aponomar          #+#    #+#             */
/*   Updated: 2019/12/03 17:31:32 by aponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc != 2)
		write(1, "a", 1);
	else
	{
		while (argv[1][i])
		{
			if (argv[1][i] == 'a')
			{
				write(1, "a", 1);
				break;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}	
