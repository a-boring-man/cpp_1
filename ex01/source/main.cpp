/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 12:51:12 by jrinna            #+#    #+#             */
/*   Updated: 2022/09/09 13:06:21 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main ( void ) {

	Zombie	*horde;

	horde = zombieHorde(5, "carl");
	
	for (int i = 0; i < 5; i++)
	{
		horde[i].announce();
	}
	
	delete[] horde;
	return (0);
}