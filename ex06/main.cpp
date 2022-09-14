/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 10:39:56 by jrinna            #+#    #+#             */
/*   Updated: 2022/09/14 14:37:41 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main( int ac, char **av ) {

	if (ac < 2)
	{
		cout << "i need at least 1 argument";
		return (1);
	}

	Harl	ce_bon_vieux_harl;
	string	level_table[] = { "SWITCH", "DEBUG", "INFO", "WARNING", "ERROR" };
	bool	stwitch = false;
	bool	p_stwitch;
	int		start;

	for (int i = 1; i < ac; i++)
	{
		start = 0;
		while (level_table[start].compare(av[i]) && start < 5)
			start++;
		
		p_stwitch = stwitch;
		switch (start) {

			case 0 :
				stwitch = !stwitch;
				if (stwitch)
					cout << "Harl has been desactivated" << endl;
				else
					cout << "Harl has been reactivated, run for your life" << endl;
				break;
			default:
				break;
		}

		if (p_stwitch == stwitch && !stwitch)
		{
			if (start >= 5)
				ce_bon_vieux_harl.complain("");
			while (start < 5)
				ce_bon_vieux_harl.complain(level_table[start++]);
		}
	}

	return (0);
}