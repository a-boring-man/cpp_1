/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 14:38:26 by jrinna            #+#    #+#             */
/*   Updated: 2022/09/09 10:12:39 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int		main( void ) {

	Zombie	*zombie;

	std::cout << std::endl <<  "creation d'un zombie avec la fonction new zombie :" << std::endl << std::endl;
	zombie = newZombie("carl");
	zombie->announce();

	std::cout << std::endl << "creation d'un zombie avec la fonction randomChump :" << std::endl << std::endl;
	randomChump("ector !!");

	std::cout << std::endl << "fin du programe :" << std::endl;
	
	delete zombie;
}