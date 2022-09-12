/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 11:28:59 by jrinna            #+#    #+#             */
/*   Updated: 2022/09/12 14:55:01 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB ( std::string name ) : _name(name) {

	std::cout << "a HumanB named : " << this->_name << " has been created" << std::endl;

	return;
}

HumanB::~HumanB ( void ) {

	std::cout << this->_name << " has been killed" << std::endl;

	return;
}

void	HumanB::attack ( void ) const {

	std::cout << this->_name << " sttacks with their " << this->_weapon.getType() << std::endl;

	return;
}

void	HumanB::setWeapon( Weapon *type ) {

	this->_weapon = type;
	std::cout << this->_name << " now have a weapon : " << this->_weapon.getType() << std::endl;
}
