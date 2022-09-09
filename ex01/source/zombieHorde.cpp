/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 12:43:39 by jrinna            #+#    #+#             */
/*   Updated: 2022/09/09 12:53:55 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde( int N, std::string name ) {

	Zombie	*zombie_horde = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		zombie_horde[i].set_name(name);
	}

	return (zombie_horde);
}