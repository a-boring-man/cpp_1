/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 10:39:56 by jrinna            #+#    #+#             */
/*   Updated: 2022/09/14 13:12:22 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main( int ac, char **av ) {

	Harl	ce_bon_vieux_harl;
	string	level_table[] = { "DEBUG", "INFO", "WARNING", "ERROR", "et bas non" };

	if (ac != 2)
	{
		cout << "i only accept 1 argument";
		return (1);
	}

	ce_bon_vieux_harl.complain(av[1]);

	return (0);
}