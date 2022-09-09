/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 12:43:16 by jrinna            #+#    #+#             */
/*   Updated: 2022/09/09 13:00:19 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	return;
}

Zombie::~Zombie()
{
	std::cout << "the zombie named : \"" << this->_name << "\" is being tortured and killed" << std::endl;

	return;
}

void	Zombie::announce( void ) const{

	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;

	return;
}

void	Zombie::set_name( std::string name) {

	this->_name = name;

	return;
}