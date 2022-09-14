/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 10:39:56 by jrinna            #+#    #+#             */
/*   Updated: 2022/09/14 12:47:39 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main( void ) {

	Harl	ce_bon_vieux_harl;
	string	level_table[] = { "DEBUG", "INFO", "WARNING", "ERROR", "et bas non" };
	int		i = 0;

	while (i < 5)
		ce_bon_vieux_harl.complain(level_table[i++]);
}